#include "analyzer.h"
/*
Analyzer::Analyzer(BracketType i)
{
   openCount=0;
   closeCount=0;
   type=i;
   if (type==ROUND)
   {
      bracketType [0]='(';
      bracketType [1]=')';
   }
   if (type==SQUARE)
   {
      bracketType [0]='[';
      bracketType [1]=']';
   }
   if (type==TRIANGULAR)
   {
      bracketType [0]='<';
      bracketType [1]='>';
   }
   if (type==CURLY)
   {
      bracketType [0]='{';
      bracketType [1]='}';
   }
}
*/
void Analyzer::stat(int & i, int & j, int & sizeOpen,int & sizeClose)
{
   i=openCount;
   j=closeCount;
   sizeOpen=open.stackSize();
   sizeClose=close.stackSize();
}
/*
void Analyzer::analyze()
{
   char tmp;
   while(!text.empty())
   {
      tmp=text.top();
      if (tmp==bracketType[0])
      {
         open.push(true);
         openCount++;
      }
      if (tmp==bracketType[1])
      {
         closeCount++;
         if(open.empty())
            close.push(false);
         else
            open.pop();
      }
      text.pop();
   }
}

void Analyzer::copyText(char * buffer, int length)
{
   char tmp;
   for(int i=length; i>=0; i--)
   {
      tmp=buffer[i];
      if ((tmp==bracketType[0])||(tmp==bracketType[1]))
         text.push(tmp);
   }
}
*/
bool Analyzer::isAllBracketsClose()
{
   if ((open.stackSize()==0)&&(close.stackSize()==0))
      return true;
   else
      return false;
}

