#ifndef TASK2_H
#define TASK2_H
#include "/root/stack/stack.h"
#include "analyzer.h"
#include <fstream>
#include <string>

class Bracket
{
   public:
      Bracket();
      ~Bracket();
      void putText(char*, int );
      void report();
      
   private:
      Analyzer* analyzers;
      char* text;
      int length;
};


#endif
