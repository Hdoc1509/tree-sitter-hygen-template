// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterHygenTemplate",
    products: [
        .library(name: "TreeSitterHygenTemplate", targets: ["TreeSitterHygenTemplate"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterHygenTemplate",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterHygenTemplateTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterHygenTemplate",
            ],
            path: "bindings/swift/TreeSitterHygenTemplateTests"
        )
    ],
    cLanguageStandard: .c11
)
