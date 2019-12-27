#include "task2.h"
#include <fstream>
#include <iostream>


int main()
{
   Bracket B;
   std::fstream in("source.txt", std::ios_base::in);
   int length;
   char * buffer;
   in.seekg(0,std::ios::end);
   length=in.tellg();
   in.seekg(0,std::ios::beg);
   buffer=new char [length];
   in.read(buffer,length);
   in.close();
   B.putText(buffer, length);
   B.report();
  
   return 0;
}
