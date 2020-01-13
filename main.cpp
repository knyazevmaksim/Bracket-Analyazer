#include "task2.h"
#include "builder.h"
#include <fstream>
#include <iostream>


int main()
{
   Bracket B;
   Bracket C;
   BracketAnalyzerBuilder A;
   std::fstream in("source.txt", std::ios_base::in);
   int length;
   char * buffer;
   in.seekg(0,std::ios::end);
   length=in.tellg();
   in.seekg(0,std::ios::beg);
   buffer=new char [length];
   in.read(buffer,length);
   in.close();
   B=A.addRoundBrackets().addSquareBrackets().addTriangularBrackets().addCurlyBrackets().getResult();
   //A.reset();
   //C=A.addTriangularBrackets().addCurlyBrackets().getResult();
   //C.putText(buffer, length);
   //C.report("reportC.txt");
   B.putText(buffer, length);
   B.report("reportB.txt");
  
   return 0;
}
