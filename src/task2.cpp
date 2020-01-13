#include "task2.h"

void Bracket::putText(char * buffer, int j)
{
   int i;
   length=j;
   text = new char [length];
   for(int i=0;i<length; i++)
   {
      text[i]=buffer[i];
   }
}

Bracket::~Bracket()
{
   
}

void Bracket::addBrackets(Analyzer * i, BracketType j)
{
   analyzers.push_back(i);
   bracketType.push_back(j);
}

Bracket::Bracket()
{
   length=0;
   text=NULL;
}

void Bracket::report(std::string fileName)
{
   std::fstream out(fileName, std::ios_base::app);
   int openCount=0;
   int closeCount=0;
   int openSize=0;
   int closeSize=0;
   bool tmp;
   std::string name;
   int j=analyzers.size();
   for (int i=0; i<analyzers.size(); i++)
   {
      analyzers[i]->copyText(text,length);
      analyzers[i]->analyze();
      analyzers[i]->stat(openCount, closeCount, openSize, closeSize);
      tmp=analyzers[i]->isAllBracketsClose();
      if (bracketType[i]==ROUND)
         name="круглые";
      if (bracketType[i]==TRIANGULAR)
         name="треугольные";
      if (bracketType[i]==SQUARE)
         name="квадратные";
      if (bracketType[i]==CURLY)
         name="фигурные";
      if(tmp)
         out<<"все "<<name<<" скобки закрыты"<<std::endl;
      else
      {
         out<<"не закрыто "<<name<<" скобок "<<openSize<<std::endl;
         out<<"не открыто "<<name<<" скобок "<<closeSize<<std::endl;
      }
      out<<"открытых "<<name<<" скобок "<<openCount<<std::endl;
      out<<"закрытых "<<name<<" скобок "<<closeCount<<std::endl;
   }    
}

