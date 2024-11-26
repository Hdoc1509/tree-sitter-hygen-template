cmake_minimum_required(VERSION 3.13)

project(tree-sitter-hygen-template
        VERSION "0.2.3"
        DESCRIPTION "HygenTemplate grammar for tree-sitter"
        HOMEPAGE_URL "https://github.com/tree-sitter/tree-sitter-hygen-template"
        LANGUAGES C)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

set(TREE_SITTER_ABI_VERSION 14 CACHE STRING "Tree-sitter ABI version")
if(NOT ${TREE_SITTER_ABI_VERSION} MATCHES "^[0-9]+$")
    unset(TREE_SITTER_ABI_VERSION CACHE)
    message(FATAL_ERROR "TREE_SITTER_ABI_VERSION must be an integer")
endif()

find_program(TREE_SITTER_CLI tree-sitter DOC "Tree-sitter CLI")

add_custom_command(OUTPUT "${CMAKE_CURRENT_SOURCE_DIR}/src/parser.c"
                   DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/grammar.json"
                   COMMAND "${TREE_SITTER_CLI}" generate src/grammar.json
                            --abi=${TREE_SITTER_ABI_VERSION}
                   WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
                   COMMENT "Generating parser.c")

add_library(tree-sitter-hygen-template src/parser.c)
if(EXISTS src/scanner.c)
  target_sources(tree-sitter-hygen-template PRIVATE src/scanner.c)
endif()
target_include_directories(tree-sitter-hygen-template PRIVATE src)

set_target_properties(tree-sitter-hygen-template
                      PROPERTIES
                      C_STANDARD 11
                      POSITION_INDEPENDENT_CODE ON
                      SOVERSION "${TREE_SITTER_ABI_VERSION}.${PROJECT_VERSION_MAJOR}")

configure_file(bindings/c/tree-sitter-hygen-template.pc.in
               "${CMAKE_CURRENT_BINARY_DIR}/tree-sitter-hygen-template.pc" @ONLY)

include(GNUInstallDirs)

install(FILES bindings/c/tree-sitter-hygen-template.h
        DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}/tree_sitter")
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/tree-sitter-hygen-template.pc"
        DESTINATION "${CMAKE_INSTALL_DATAROOTDIR}/pkgconfig")
install(TARGETS tree-sitter-hygen-template
        LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}")

add_custom_target(test "${TREE_SITTER_CLI}" test
                  WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
                  COMMENT "tree-sitter test")

# vim:ft=cmake:
