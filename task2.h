#ifndef TASK2_H
#define TASK2_H
#include "/root/stack/stack.h"
#include "analyzer.h"
#include <fstream>
#include <string>
#include <vector>

class Bracket
{
   public:
      Bracket();
      ~Bracket();
      void putText(char*, int );
      void report(std::string);
      void addBrackets(Analyzer* , BracketType );
      
   private:
      std::vector<Analyzer*> analyzers;
      std::vector<BracketType> bracketType;
      char* text;
      int length;
};


#endif
