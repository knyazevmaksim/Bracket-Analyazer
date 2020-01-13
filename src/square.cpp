#include "square.h"

void SquareAnalyzer::copyText(char * buffer, int length)
{
   char tmp;
   for(int i=length-1; i>=0; i--)
   {
      tmp=buffer[i];
      if ((tmp=='[')||(tmp==']'))
         text.push(tmp);
   }
}

void SquareAnalyzer::analyze()
{
   char tmp;
   while(!text.empty())
   {
      tmp=text.top();
      if (tmp=='[')
      {
         open.push(true);
         openCount++;
      }
      if (tmp==']')
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

SquareAnalyzer::SquareAnalyzer()
{
   openCount=0;
   closeCount=0;
}

SquareAnalyzer::~SquareAnalyzer()
{}
