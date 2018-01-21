#include <iostream>
#include <fstream>
#include <string>
#include "antlr4-cpp-runtime/runtime/src/antlr4-runtime.h"
#include "Lexer-Parser/DecafLexer.h"
#include "Lexer-Parser/DecafParser.h"

int main(int argc, char *argv[]) {
    std::string line;
    std::ifstream decafFile ("text.txt");

    if (decafFile.is_open()) {
        antlr4::ANTLRInputStream input(decafFile);
        DecafLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);

        tokens.fill();
        for (auto token : tokens.getTokens()) {
            std::cout << token->toString() << std::endl;
        }

        DecafParser parser(&tokens);
        antlr4::tree::ParseTree *tree;

        std::cout << tree->toStringTree(&parser) << std::endl;

        decafFile.close();
    }
    return 0;
}