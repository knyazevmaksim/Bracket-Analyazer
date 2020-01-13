#include "stack.h"
#include <gtest/gtest.h>
int main()
{
   Stack <int> S;
   try{
   std::cout<<"stack status"<<!S.empty()<<std::endl;
   std::cout<<"stack size "<<S.stackSize()<<std::endl;
   for(int i=0; i<10;i++)
   {
      S.push(i);
   }
   std::cout<<"stack status"<<!S.empty()<<std::endl;
   std::cout<<"stack size "<<S.stackSize()<<std::endl;
   for(int i=0; i<10;i++)
   {
      std::cout<<"stack size "<<S.stackSize()<<std::endl;
      std::cout<<S.top()<<std::endl;
      S.pop();
   }
   std::cout<<"stack status"<<!S.empty()<<std::endl;
   std::cout<<"stack size "<<S.stackSize()<<std::endl;
   
   return 0;
   }
   catch (int i)
   {
      std::cout<<"перехват исключения:"<<i<<std::endl;
      if (i==1)
         std::cout<<"нет элемента для удаления"<<std::endl;
      if (i==2)
         std::cout<<"нет элемента для возврата"<<std::endl;
      
      return 1;
   }
   
}
