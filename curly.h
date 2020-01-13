#ifndef CURLY_H
#define CURLY_H
#include "analyzer.h"
class CurlyAnalyzer:public Analyzer
{
   public:
      CurlyAnalyzer();
      ~CurlyAnalyzer();
      void copyText(char* , int ) override;
      void analyze() override;
     // bool isAllbracketsClose() override;
  /* private:
      Stack<char> text;
      int openCount, closeCount;
      Stack<bool> open, close;   */
};
#endif
