//
//  WASMObjectiveCParserListener.hpp
//  antlr4-cpp-demo
//
//  Created by Zhiyang Fu on 2020/8/22.
//  Copyright © 2020 ANTLR4 Project. All rights reserved.
//

#ifndef WASMObjectiveCParserListener_hpp
#define WASMObjectiveCParserListener_hpp

#import "ObjectiveCParserBaseListener.h"

using namespace antlrcpptest;

class WASMObjectiveCParserListener : public ObjectiveCParserBaseListener {
    virtual void enterTranslationUnit(ObjectiveCParser::TranslationUnitContext *ctx);
};

#endif /* WASMObjectiveCParserListener_hpp */
