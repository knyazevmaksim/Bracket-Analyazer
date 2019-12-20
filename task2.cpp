#include "task2.h"
void Bracket::roundBracketStat(int& open, int& close)
{
   open=roundOpenCount;
   close=roundCloseCount;
}
void Bracket::triangularBracketStat(int& open, int& close)
{
   open=triangularOpenCount;
   close=triangularCloseCount;
}

void Bracket::squareBracketStat(int& open, int& close)
{
   open=squareOpenCount;
   close=squareCloseCount;
}

void Bracket::curlyBracketStat(int& open, int& close)
{
   open=curlyOpenCount;
   close=curlyCloseCount;
}

void Bracket::putText(char * buffer, int length)
{
   
   char tmp;
   int i;
   for(int i=length;i>=0; i--)
   {
      tmp=buffer[i];
      text.push(tmp);
   }
}

void Bracket::bracketCheck()
{
   char tmp;
   while(!text.empty())
   {
      tmp=text.top();
      switch(tmp)
      {
         case '(':
         {
            roundOpen.push(true);
            roundOpenCount++;
            break;
         }
         case ')':
         {
            roundCloseCount++;
            if(roundOpen.empty())
               roundClose.push(false);
            else
                roundOpen.pop();
            
            break;
         }
         case '<':
         {
            triangularOpen.push(true);
            triangularOpenCount++;
            break;
         }
         case '>':
         {
            triangularCloseCount++;
            if(triangularOpen.empty())
               triangularClose.push(false);
            else
                triangularOpen.pop();
            break;
         }
          case '[':
         {
            squareOpen.push(true);
            squareOpenCount++;
            break;
         }
         case ']':
         {
            squareCloseCount++;
            if(squareOpen.empty())
               squareClose.push(false);
            else
                squareOpen.pop();
            break;
         }
          case '{':
         {
            curlyOpen.push(true);
            curlyOpenCount++;
            break;
         }
         case '}':
         {
            curlyCloseCount++;
            if(curlyOpen.empty())
               curlyClose.push(false);
            else
               curlyOpen.pop();
            break;
         }
      }
      text.pop();
   }
}
bool Bracket::isAllBracketsClose()
{
   if ((roundOpen.stackSize()==0)&&
   (triangularOpen.stackSize()==0)&&
   (squareOpen.stackSize()==0)&&
   (curlyOpen.stackSize()==0)&&(roundClose.stackSize()==0)&&
   (triangularClose.stackSize()==0)&&
   (squareClose.stackSize()==0)&&
   (curlyClose.stackSize()==0))
      return true;
   else
      return false;
}

Bracket::~Bracket()
{
   
}
Bracket::Bracket()
{
   roundOpenCount=0;
   roundCloseCount=0;
   triangularOpenCount=0;
   triangularCloseCount=0;
   squareOpenCount=0;
   squareCloseCount=0;
   curlyOpenCount=0;
   curlyCloseCount=0;
}

void Bracket::report()
{
   std::fstream out("report.txt", std::ios_base::app);
   if (isAllBracketsClose())
      out<<"Все скобки закрыты"<<std::endl;
   else
      if(roundOpen.stackSize()!=0)
         out<<"не закрыто "<<roundOpen.stackSize()<<" круглых скобок"<<std::endl;
      if(triangularOpen.stackSize()!=0)
         out<<"не закрыто "<<triangularOpen.stackSize()<<
         " треугольных скобок"<<std::endl;
      if(squareOpen.stackSize()!=0)
         out<<"не закрыто "<<squareOpen.stackSize()<<
         " квадратных скобок"<<std::endl;
      if(curlyOpen.stackSize()!=0)
         out<<"не закрыто "<<curlyOpen.stackSize()<<" фигурных скобок"<<std::endl;
         
}



