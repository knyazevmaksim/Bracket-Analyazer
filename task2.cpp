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
Bracket::Bracket()
{
   length=0;
   text=NULL;
   analyzers=new Analyzer [4];
   analyzers[0]=Analyzer(ROUND);
   analyzers[1]=Analyzer(TRIANGULAR);
   analyzers[2]=Analyzer(SQUARE);
   analyzers[3]=Analyzer(CURLY);
}

void Bracket::report()
{
   std::fstream out("report.txt", std::ios_base::app);
   int openCount=0;
   int closeCount=0;
   int openSize=0;
   int closeSize=0;
   bool tmp;
   std::string name;
   for (int i=0; i<4; i++)
   {
      analyzers[i].copyText(text,length);
      analyzers[i].analyze();
      analyzers[i].stat(openCount, closeCount, openSize, closeSize);
      tmp=analyzers[i].isAllBracketsClose();
      if (i==0)
         name="круглые";
      if (i==1)
         name="треугольные";
      if (i==2)
         name="квадратные";
      if (i==3)
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
   /*analyzers[0].copyText(text,length);
   analyzers[0].analyze();
   analyzers[0].stat(openCount, closeCount, openSize, closeSize);
   tmp=analyzers[0].isAllBracketsClose();
   if(tmp)
      out<<"все круглые скобки закрыты"<<std::endl;
   else
      {
         out<<"не закрыто круглых скобок "<<openSize<<std::endl;
         out<<"не открыто круглых скобок "<<openSize<<std::endl;
      }
   out<<"открытых круглых скобок "<<openCount<<std::endl;
   out<<"закрытых круглых скобок "<<closeCount<<std::endl;
   
   analyzers[1].copyText(text,length);
   analyzers[1].analyze();
   analyzers[1].stat(openCount, closeCount, openSize, closeSize);
   tmp=analyzers[1].isAllBracketsClose();
   if(tmp)
      out<<"все треугольные скобки закрыты"<<std::endl;
   else
      {
         out<<"не закрыто треугольных скобок "<<openSize<<std::endl;
         out<<"не открыто треугольных скобок "<<openSize<<std::endl;
      }
   out<<"открытых треугольных скобок "<<openCount<<std::endl;
   out<<"закрытых треугольных скобок "<<closeCount<<std::endl;
   
   analyzers[2].copyText(text,length);
   analyzers[2].analyze();
   analyzers[2].stat(openCount, closeCount, openSize, closeSize);
   tmp=analyzers[2].isAllBracketsClose();
   if(tmp)
      out<<"все квадратные скобки закрыты"<<std::endl;
   else
      {
         out<<"не закрыто квадратных скобок "<<openSize<<std::endl;
         out<<"не открыто квадратных скобок "<<openSize<<std::endl;
      }
   out<<"открытых квадратных скобок "<<openCount<<std::endl;
   out<<"закрытых квадратных скобок "<<closeCount<<std::endl;
   
   analyzers[3].copyText(text,length);
   analyzers[3].analyze();
   analyzers[3].stat(openCount, closeCount, openSize, closeSize);
   tmp=analyzers[3].isAllBracketsClose();
   if(tmp)
      out<<"все фигурные скобки закрыты"<<std::endl;
   else
      {
         out<<"не закрыто фигурных скобок "<<openSize<<std::endl;
         out<<"не открыто фигурных скобок "<<openSize<<std::endl;
      }
   out<<"открытых фигурных скобок "<<openCount<<std::endl;
   out<<"закрытых фигурных скобок "<<closeCount<<std::endl;*/
      
   
}



