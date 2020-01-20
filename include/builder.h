#ifndef BUILDER_H
#define BUILDER_H
#include "bracket.h"
#include "analyzer.h"
#include "round.h"
#include "square.h"
#include "triangular.h"
#include "curly.h"
class BracketAnalyzerBuilder
{
   private:
      Bracket* bracketAnalyzer;
   public:
      BracketAnalyzerBuilder();
      BracketAnalyzerBuilder & addRoundBrackets();
      BracketAnalyzerBuilder & addSquareBrackets();
      BracketAnalyzerBuilder & addTriangularBrackets();
      BracketAnalyzerBuilder & addCurlyBrackets();
      BracketAnalyzerBuilder & reset();
      Bracket getResult();
};



#endif
