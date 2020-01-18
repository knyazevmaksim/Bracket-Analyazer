#ifndef SQUARE_H
#define SQUARE_H
#include "analyzer.h"
class SquareAnalyzer:public Analyzer
{
   public:
     SquareAnalyzer();
      ~SquareAnalyzer();
      void copyText(char* , int ) override;
      void analyze() override;
     // bool isAllbracketsClose() override;
  /* private:
      Stack<char> text;
      int openCount, closeCount;
      Stack<bool> open, close;   */
};
#endif
