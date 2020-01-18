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

/*class Analyzer
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
      
   
};*/

class Analyzer
{
   public:
      virtual void copyText(char* , int )=0;
      void stat(int & , int &, int &, int & );
      virtual void analyze()=0;
      bool isAllBracketsClose();
   protected:
      Stack<char> text;
      int openCount, closeCount;
      Stack<bool> open, close; 
};
#endif
