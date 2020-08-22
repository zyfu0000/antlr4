//
//  WASMObjectiveCParserListener.cpp
//  antlr4-cpp-demo
//
//  Created by Zhiyang Fu on 2020/8/22.
//  Copyright © 2020 ANTLR4 Project. All rights reserved.
//

#include "WASMObjectiveCParserListener.hpp"

void WASMObjectiveCParserListener::enterTranslationUnit(ObjectiveCParser::TranslationUnitContext *ctx)
{
    std::cout << "translation unit" << std::endl;
}
