#include "task2.h"
void Bracket::roundBracketStat(int& open, int& close)
{
   open=roundOpen.stackSize();
   close=roundClose.stackSize();
}
void Bracket::triangularBracketStat(int& open, int& close)
{
   open=triangularOpen.stackSize();
   close=triangularClose.stackSize();
}

void Bracket::squareBracketStat(int& open, int& close)
{
   open=squareOpen.stackSize();
   close=squareClose.stackSize();
}

void Bracket::curlyBracketStat(int& open, int& close)
{
   open=curlyOpen.stackSize();
   close=curlyClose.stackSize();
}

void Bracket::putText(char * buffer, int length)
{
   
   char tmp;
   int i;
   for(int i=0;i<length; i++)
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
            break;
         }
         case ')':
         {
            roundClose.push(true);
            break;
         }
         case '<':
         {
            triangularOpen.push(true);
            break;
         }
         case '>':
         {
            triangularClose.push(true);
            break;
         }
          case '[':
         {
            squareOpen.push(true);
            break;
         }
         case ']':
         {
            squareClose.push(true);
            break;
         }
          case '{':
         {
           curlyOpen.push(true);
            break;
         }
         case '}':
         {
            curlyClose.push(true);
            break;
         }
      }
      text.pop();
   }
}
bool Bracket::isAllBracketsClose()
{
   if ((roundOpen.stackSize()==roundClose.stackSize())&&
   (triangularOpen.stackSize()==triangularClose.stackSize())&&
   (squareOpen.stackSize()==squareClose.stackSize())&&
   (curlyOpen.stackSize()==curlyClose.stackSize()))
      return true;
   else
      return false;
}

Bracket::~Bracket()
{
   
}
Bracket::Bracket()
{
   
}
