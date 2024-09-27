import XCTest
import SwiftTreeSitter
import TreeSitterSt

final class TreeSitterStTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_st())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading St grammar")
    }
}
