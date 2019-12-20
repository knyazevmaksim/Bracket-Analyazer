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
   B.bracketCheck();
   B.report();
   
   
   
   
   
   B.bracketCheck();
   
   std::cout<<B.isAllBracketsClose()<<std::endl;
   int j=0;
   int i=0;
   B.roundBracketStat(i,j);
      
   
   
   std::cout<<"открывающих круглых скобочек:"<<i<<std::endl;
   std::cout<<"закрывающих круглых скобочек:"<<j<<std::endl;
   B.triangularBracketStat(i,j);
   std::cout<<"открывающих треугольных скобочек:"<<i
   <<std::endl;
   std::cout<<"закрывающих треугольных скобочек:"<<j
   <<std::endl;
    B.squareBracketStat(i,j);
   std::cout<<"открывающих квадратных скобочек:"<<i<<std::endl;
   std::cout<<"закрывающих квадратных скобочек:"<<j<<std::endl;
   B.curlyBracketStat(i,j);
   std::cout<<"открывающих фигурных скобочек:"<<i<<std::endl;
   std::cout<<"закрывающих фигурных скобочек:"<<j<<std::endl;
   return 0;
}
