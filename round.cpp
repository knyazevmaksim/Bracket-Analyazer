#include "round.h"

void RoundAnalyzer::copyText(char * buffer, int length)
{
   char tmp;
   for(int i=length-1; i>=0; i--)
   {
      tmp=buffer[i];
      if ((tmp=='(')||(tmp==')'))
         text.push(tmp);
   }
}

void RoundAnalyzer::analyze()
{
   char tmp;
   while(!text.empty())
   {
      tmp=text.top();
      if (tmp=='(')
      {
         open.push(true);
         openCount++;
      }
      if (tmp==')')
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

RoundAnalyzer::RoundAnalyzer()
{
   openCount=0;
   closeCount=0;
}

RoundAnalyzer::~RoundAnalyzer()
{

}
