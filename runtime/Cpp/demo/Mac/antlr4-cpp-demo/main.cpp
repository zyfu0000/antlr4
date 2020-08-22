/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */

//
//  main.cpp
//  antlr4-cpp-demo
//
//  Created by Mike Lischke on 13.03.16.
//

#include <iostream>

#include "antlr4-runtime.h"
#include "ObjectiveCLexer.h"
#include "ObjectiveCParser.h"
#include "WASMObjectiveCParserListener.hpp"

using namespace antlrcpptest;
using namespace antlr4;

int main(int , const char **) {
    
    ANTLRInputStream input(u8"@interface aa @property (assign) BOOL a; @end");
    ObjectiveCLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    
    tokens.fill();
    for (auto token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;
    }
    
    WASMObjectiveCParserListener listener;
    ObjectiveCParser parser(&tokens);
    parser.addParseListener(&listener);
    tree::ParseTree *tree = parser.translationUnit();
    
    std::cout << tree->toStringTree(&parser) << std::endl;
    
    return 0;
}

//#include "TLexer.h"
//#include "TParser.h"
//
//using namespace antlrcpptest;
//using namespace antlr4;
//
//int main(int , const char **) {
//    ANTLRInputStream input(u8"🍴 = 🍐 + \"😎\";(((x * π))) * µ + ∰; a + (x * (y ? 0 : 1) + z);");
//    TLexer lexer(&input);
//    CommonTokenStream tokens(&lexer);
//
//    tokens.fill();
//    for (auto token : tokens.getTokens()) {
//        std::cout << token->toString() << std::endl;
//    }
//
//    TParser parser(&tokens);
//    tree::ParseTree *tree = parser.main();
//
//    std::cout << tree->toStringTree(&parser) << std::endl;
//
//    return 0;
//}
