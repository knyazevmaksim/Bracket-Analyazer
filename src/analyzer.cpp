#include "analyzer.h"

void Analyzer::stat(int & i, int & j, int & sizeOpen,int & sizeClose)
{
   i=openCount;
   j=closeCount;
   sizeOpen=open.stackSize();
   sizeClose=close.stackSize();
}

bool Analyzer::isAllBracketsClose()
{
   if ((open.stackSize()==0)&&(close.stackSize()==0))
      return true;
   else
      return false;
}

