#ifndef ROUND_H
#define ROUND_H
#include "analyzer.h"
class RoundAnalyzer:public Analyzer
{
   public:
      RoundAnalyzer();
      ~RoundAnalyzer();
      void copyText(char* , int ) override;
      void analyze() override;
     // bool isAllbracketsClose() override;
   /*private:
      Stack<char> text;
      int openCount, closeCount;
      Stack<bool> open, close;   */
};
#endif
