import XCTest
import SwiftTreeSitter
import TreeSitterHygenTemplate

final class TreeSitterHygenTemplateTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_hygen_template())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading HygenTemplate grammar")
    }
}
