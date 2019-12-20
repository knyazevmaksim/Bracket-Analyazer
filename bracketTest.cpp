#include "/root/stack/stack.h"
#include "gtest/gtest.h"
#include "task2.h"
namespace
{
   TEST(bracketTest, roundBracketCorrectScryptTrue1)
   {
      char tmp[]="(())";
      Bracket B;
      B.putText(tmp, 4);
      B.bracketCheck();
      EXPECT_EQ(true, B.isAllBracketsClose());
      int i=0;
      int j=0;
      B.roundBracketStat(i,j);
      EXPECT_EQ(2, i);
      EXPECT_EQ(2,j);   
   }
   
   TEST(bracketTest, roundBracketCorrectScryptFalse1)
   {
      char tmp[]="(()";
      Bracket B;
      B.putText(tmp, 3);
      B.bracketCheck();
      EXPECT_EQ(false, B.isAllBracketsClose());
      int i=0;
      int j=0;
      B.roundBracketStat(i,j);
      EXPECT_EQ(2, i);
      EXPECT_EQ(1,j);   
   }
   
   TEST(bracketTest, roundBracketCorrectScryptFalse2)
   {
      char tmp[]="((";
      Bracket B;
      B.putText(tmp, 2);
      B.bracketCheck();
      EXPECT_EQ(false, B.isAllBracketsClose());
      int i=0;
      int j=0;
      B.roundBracketStat(i,j);
      EXPECT_EQ(2, i);
      EXPECT_EQ(0,j);   
   }
   
   TEST(bracketTest, roundBracketCorrectScryptFalse3)
   {
      char tmp[]="))";
      Bracket B;
      B.putText(tmp, 2);
      B.bracketCheck();
      EXPECT_EQ(false, B.isAllBracketsClose());
      int i=0;
      int j=0;
      B.roundBracketStat(i,j);
      EXPECT_EQ(0, i);
      EXPECT_EQ(2,j);   
   }
   
   TEST(bracketTest, roundBracketCorrectScryptFalse4)
   {
      char tmp[]="())";
      Bracket B;
      B.putText(tmp, 3);
      B.bracketCheck();
      EXPECT_EQ(false, B.isAllBracketsClose());
      int i=0;
      int j=0;
      B.roundBracketStat(i,j);
      EXPECT_EQ(1, i);
      EXPECT_EQ(2,j);   
   }
   
   TEST(bracketTest, roundBracketCorrectScryptFalse5)
   {
      char tmp[]="))(";
      Bracket B;
      B.putText(tmp, 3);
      B.bracketCheck();
      EXPECT_EQ(false, B.isAllBracketsClose());
      int i=0;
      int j=0;
      B.roundBracketStat(i,j);
      EXPECT_EQ(1, i);
      EXPECT_EQ(2,j);   
   }
   TEST(bracketTest, roundBracketCorrectScryptFalse6)
   {
      char tmp[]=")((";
      Bracket B;
      B.putText(tmp, 3);
      B.bracketCheck();
      EXPECT_EQ(false, B.isAllBracketsClose());
      int i=0;
      int j=0;
      B.roundBracketStat(i,j);
      EXPECT_EQ(2, i);
      EXPECT_EQ(1,j);   
   }
   TEST(bracketTest, roundBracketCorrectScryptFalse7)
   {
      char tmp[]=")(";
      Bracket B;
      B.putText(tmp, 2);
      B.bracketCheck();
      EXPECT_EQ(false, B.isAllBracketsClose());
      int i=0;
      int j=0;
      B.roundBracketStat(i,j);
      EXPECT_EQ(1, i);
      EXPECT_EQ(1,j);   
   }
   
   TEST(bracketTest, triangularBracketCorrectScryptTrue1)
   {
      char tmp[]="<<<>>>";
      Bracket B;
      B.putText(tmp, 6);
      B.bracketCheck();
      EXPECT_EQ(true, B.isAllBracketsClose());
      int i=0;
      int j=0;
      B.triangularBracketStat(i,j);
      EXPECT_EQ(3, i);
      EXPECT_EQ(3,j);   
   }
   
   TEST(bracketTest, triangularBracketCorrectScryptFalse1)
   {
      char tmp[]="<<<>";
      Bracket B;
      B.putText(tmp, 4);
      B.bracketCheck();
      EXPECT_EQ(false, B.isAllBracketsClose());
      int i=0;
      int j=0;
      B.triangularBracketStat(i,j);
      EXPECT_EQ(3, i);
      EXPECT_EQ(1,j);   
   }
   
   TEST(bracketTest, triangularBracketCorrectScryptFalse2)
   {
      char tmp[]="<<<<<";
      Bracket B;
      B.putText(tmp, 5);
      B.bracketCheck();
      EXPECT_EQ(false, B.isAllBracketsClose());
      int i=0;
      int j=0;
      B.triangularBracketStat(i,j);
      EXPECT_EQ(5, i);
      EXPECT_EQ(0,j);   
   }
   
   TEST(bracketTest, triangularBracketCorrectScryptFalse3)
   {
      char tmp[]=">>>>";
      Bracket B;
      B.putText(tmp, 4);
      B.bracketCheck();
      EXPECT_EQ(false, B.isAllBracketsClose());
      int i=0;
      int j=0;
      B.triangularBracketStat(i,j);
      EXPECT_EQ(0, i);
      EXPECT_EQ(4,j);   
   }
   
   TEST(bracketTest, triangularBracketCorrectScryptFalse4)
   {
      char tmp[]="<<>>>>>";
      Bracket B;
      B.putText(tmp, 7);
      B.bracketCheck();
      EXPECT_EQ(false, B.isAllBracketsClose());
      int i=0;
      int j=0;
      B.triangularBracketStat(i,j);
      EXPECT_EQ(2, i);
      EXPECT_EQ(5,j);   
   }
   
   TEST(bracketTest, triangularBracketCorrectScryptFalse5)
   {
      char tmp[]=">>><<";
      Bracket B;
      B.putText(tmp, 5);
      B.bracketCheck();
      EXPECT_EQ(false, B.isAllBracketsClose());
      int i=0;
      int j=0;
      B.triangularBracketStat(i,j);
      EXPECT_EQ(2, i);
      EXPECT_EQ(3,j);   
   }
   TEST(bracketTest, triangularBracketCorrectScryptFalse6)
   {
      char tmp[]=">><<<";
      Bracket B;
      B.putText(tmp, 5);
      B.bracketCheck();
      EXPECT_EQ(false, B.isAllBracketsClose());
      int i=0;
      int j=0;
      B.triangularBracketStat(i,j);
      EXPECT_EQ(3, i);
      EXPECT_EQ(2,j);   
   }
   
   TEST(bracketTest, triangularBracketCorrectScryptFalse7)
   {
      char tmp[]="<><><<>><<>";
      Bracket B;
      B.putText(tmp, 11);
      B.bracketCheck();
      EXPECT_EQ(false, B.isAllBracketsClose());
      int i=0;
      int j=0;
      B.triangularBracketStat(i,j);
      EXPECT_EQ(6, i);
      EXPECT_EQ(5,j);   
   }
   
   TEST(bracketTest, isAllBracketsTestTrue1)
   {
      char tmp[]="((<<)[[>)]{}]>";
      Bracket B;
      B.putText(tmp, 14);
      B.bracketCheck();
      EXPECT_EQ(true, B.isAllBracketsClose());
   }
}

int main()
{
   return RUN_ALL_TESTS();
}
