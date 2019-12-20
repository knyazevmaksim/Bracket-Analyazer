#ifndef TASK2_H
#define TASK2_H
#include "/root/stack/stack.h"
#include <fstream>

class Bracket
{
   public:
      Bracket();
      ~Bracket();
      void putText(char*, int );
      bool isAllBracketsClose();
      void roundBracketStat(int &, int &);
      void triangularBracketStat(int &, int &);
      void squareBracketStat(int &, int &);
      void curlyBracketStat(int &, int &);
      void bracketCheck();
      void report();
      
   private:
      Stack<char> text;
      Stack<bool> roundOpen, roundClose, triangularOpen, triangularClose, 
      squareOpen, squareClose, curlyOpen, curlyClose;
      int roundOpenCount, roundCloseCount, triangularOpenCount, 
      triangularCloseCount, squareOpenCount, squareCloseCount,curlyOpenCount, 
      curlyCloseCount;
};


#endif
