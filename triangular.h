#ifndef TRIANGULAR_H
#define TRIANGULAR_H
#include "analyzer.h"
class TriangularAnalyzer:public Analyzer
{
   public:
     TriangularAnalyzer();
      ~TriangularAnalyzer();
      void copyText(char* , int ) override;
      void analyze() override;
     // bool isAllbracketsClose() override;
   /*private:
      Stack<char> text;
      int openCount, closeCount;
      Stack<bool> open, close;   */
};
#endif
