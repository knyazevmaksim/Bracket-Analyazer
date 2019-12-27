#ifndef ANALYZER_H
#define ANALYZER_H
#include "/root/stack/stack.h"

enum BracketType
{
   ROUND,
   TRIANGULAR,
   SQUARE,
   CURLY
};

class Analyzer
{
   public:
      Analyzer();
      Analyzer(BracketType );
      void copyText(char* , int );
      void stat(int & , int &, int &, int & );
      void analyze();
      bool isAllBracketsClose();
      
   private:
      Stack<char> text;
      BracketType type;
      int openCount, closeCount;
      char bracketType [2];
      Stack<bool> open, close;
      
   
};
#endif
