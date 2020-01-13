#include "stack.h"
#include "gtest/gtest.h"

namespace
{
   TEST(stackSizeTest,size)
   {  
      int tmpSize=0;
      Stack <int> tmp;  
      int actual=tmp.stackSize();
      EXPECT_EQ(tmpSize, actual);
      tmp.push(1);
      tmpSize++;
      actual=tmp.stackSize();
      EXPECT_EQ(tmpSize, actual);
      tmp.push(1);
      tmpSize++;
      actual=tmp.stackSize();
      EXPECT_EQ(tmpSize, actual);
      
   }
   //одновременно c методом push() тестируется и метод top()
   TEST(pushTest, push)
   {
      Stack <char> tmp;
      tmp.push('q');
      EXPECT_EQ('q',tmp.top());
      tmp.push('1');
      EXPECT_EQ('1', tmp.top());
      tmp.push(';');
      EXPECT_EQ(';', tmp.top());  
   }
   TEST(popTest, pop)
   {
      Stack<int> tmp;
      tmp.push(1);
      tmp.push(2);
      tmp.pop();
      EXPECT_EQ(1, tmp.top());
      tmp.push(1);
      tmp.push(2);
      tmp.push(3);
      tmp.pop();
      tmp.pop();
      EXPECT_EQ(1,tmp.top()); 
   }
   TEST(emptyTest, empty)
   {
      Stack<double> tmp;
      EXPECT_EQ(true, tmp.empty());
      tmp.push(2.3);
      EXPECT_EQ(false, tmp.empty());
      tmp.pop();
      EXPECT_EQ(true, tmp.empty());
   }
}
int main()
{
   return RUN_ALL_TESTS();
}
