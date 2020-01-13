#include"builder.h"

BracketAnalyzerBuilder::BracketAnalyzerBuilder()
{
   reset();
} 

BracketAnalyzerBuilder & BracketAnalyzerBuilder::reset()
{
   bracketAnalyzer=new Bracket();
   return *this;
}

BracketAnalyzerBuilder & BracketAnalyzerBuilder::addRoundBrackets()
{
   BracketType type=ROUND;
   RoundAnalyzer * tmp;
   tmp=new RoundAnalyzer();
   bracketAnalyzer->addBrackets(tmp, ROUND);//при передаче по значению проблема с родительским абстрактным классом
   return *this;
}

BracketAnalyzerBuilder & BracketAnalyzerBuilder::addSquareBrackets()
{
   BracketType type=SQUARE;
   SquareAnalyzer * tmp;
   tmp =new SquareAnalyzer();
   bracketAnalyzer->addBrackets(tmp, SQUARE);
   return *this;
}

BracketAnalyzerBuilder & BracketAnalyzerBuilder::addTriangularBrackets()
{
   BracketType type=TRIANGULAR;
   TriangularAnalyzer * tmp;
   tmp=new TriangularAnalyzer();
   bracketAnalyzer->addBrackets(tmp, TRIANGULAR);
   return *this;
}

BracketAnalyzerBuilder & BracketAnalyzerBuilder::addCurlyBrackets()
{
   BracketType type=CURLY;
   CurlyAnalyzer * tmp;
   tmp=new CurlyAnalyzer();
   bracketAnalyzer->addBrackets(tmp, CURLY);
   return *this;
}

Bracket BracketAnalyzerBuilder::getResult()
{
   Bracket* result=bracketAnalyzer;
   reset();
   return *(result);
}
