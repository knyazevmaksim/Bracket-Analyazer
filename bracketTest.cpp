#include "/root/stack/stack.h"
#include "gtest/gtest.h"
#include "task2.h"
#include "builder.h"
#include "analyzer.h"
#include "round.h"
#include "square.h"
#include "triangular.h"
#include "curly.h"
namespace
{
   TEST(bracketTest, roundBracketCorrectScryptTrue1)
   {
      char tmp[]="(())";
      RoundAnalyzer A;
      A.copyText(tmp, 4);
      A.analyze();
      EXPECT_EQ(true, A.isAllBracketsClose());
      int i=0;
      int j=0;
      int k=0;
      int g=0;
      A.stat(i,j, k, g);
      EXPECT_EQ(2, i);
      EXPECT_EQ(2,j);
      EXPECT_EQ(0, k);
      EXPECT_EQ(0,g); 
   }
   
   TEST(bracketTest, roundBracketCorrectScryptFalse1)
   {
      char tmp[]="(()";
      RoundAnalyzer A;
      A.copyText(tmp, 3);
      A.analyze();
      int i=0;
      int j=0;
      int k=0;
      int g=0;
      EXPECT_EQ(false, A.isAllBracketsClose());
      A.stat(i,j,k,g);
      EXPECT_EQ(2, i);
      EXPECT_EQ(1,j);
      EXPECT_EQ(1, k);
      EXPECT_EQ(0,g); 
   }
   
   TEST(bracketTest, roundBracketCorrectScryptFalse2)
   {
      char tmp[]="((";
      RoundAnalyzer A;
      A.copyText(tmp, 2);
      A.analyze();
      int i=0;
      int j=0;
      int k=0;
      int g=0;
      EXPECT_EQ(false, A.isAllBracketsClose());
      A.stat(i,j,k,g);
      EXPECT_EQ(2, i);
      EXPECT_EQ(0,j);
      EXPECT_EQ(2, k);
      EXPECT_EQ(0,g);   
   }
   
   TEST(bracketTest, roundBracketCorrectScryptFalse3)
   {
      char tmp[]="))";
      RoundAnalyzer A;
      A.copyText(tmp, 2);
      A.analyze();
      int i=0;
      int j=0;
      int k=0;
      int g=0;
      EXPECT_EQ(false, A.isAllBracketsClose());
      A.stat(i,j,k,g);
      EXPECT_EQ(0, i);
      EXPECT_EQ(2,j);
      EXPECT_EQ(0, k);
      EXPECT_EQ(2,g);     
   }
   
   TEST(bracketTest, roundBracketCorrectScryptFalse4)
   {
      char tmp[]="())";
      RoundAnalyzer A;
      A.copyText(tmp, 3);
      A.analyze();
      int i=0;
      int j=0;
      int k=0;
      int g=0;
      A.stat(i,j, k, g);
      EXPECT_EQ(false, A.isAllBracketsClose());
      EXPECT_EQ(1, i);
      EXPECT_EQ(2,j);
      EXPECT_EQ(0, k);
      EXPECT_EQ(1,g); 
   }
   
   TEST(bracketTest, roundBracketCorrectScryptFalse5)
   {
      char tmp[]="))(";
      RoundAnalyzer A;
      A.copyText(tmp, 3);
      A.analyze();
      int i=0;
      int j=0;
      int k=0;
      int g=0;
      A.stat(i,j, k, g);
      EXPECT_EQ(false, A.isAllBracketsClose());
      EXPECT_EQ(1, i);
      EXPECT_EQ(2,j);
      EXPECT_EQ(1, k);
      EXPECT_EQ(2,g); 
   }
   TEST(bracketTest, roundBracketCorrectScryptFalse6)
   {
      char tmp[]=")((";
      RoundAnalyzer A;
      A.copyText(tmp, 3);
      A.analyze();
      int i=0;
      int j=0;
      int k=0;
      int g=0;
      A.stat(i,j, k, g);
      EXPECT_EQ(false, A.isAllBracketsClose());
      EXPECT_EQ(2, i);
      EXPECT_EQ(1,j);
      EXPECT_EQ(2, k);
      EXPECT_EQ(1,g);   
   }
   TEST(bracketTest, roundBracketCorrectScryptFalse7)
   {
      char tmp[]=")(";
      RoundAnalyzer A;
      A.copyText(tmp, 2);
      A.analyze();
      int i=0;
      int j=0;
      int k=0;
      int g=0;
      A.stat(i,j, k, g);
      EXPECT_EQ(false, A.isAllBracketsClose());
      EXPECT_EQ(1, i);
      EXPECT_EQ(1,j);
      EXPECT_EQ(1, k);
      EXPECT_EQ(1,g);     
   }
   
   TEST(bracketTest, triangularBracketCorrectScryptTrue1)
   {
      char tmp[]="<<<>>>";
      TriangularAnalyzer A;
      A.copyText(tmp, 6);
      A.analyze();
      int i=0;
      int j=0;
      int k=0;
      int g=0;
      A.stat(i,j, k, g);
      EXPECT_EQ(true, A.isAllBracketsClose());
      EXPECT_EQ(3, i);
      EXPECT_EQ(3,j); 
      EXPECT_EQ(0, k);
      EXPECT_EQ(0,g);  
   }
   
   TEST(bracketTest, triangularBracketCorrectScryptFalse1)
   {
      char tmp[]="<<<>";
      TriangularAnalyzer A;
      A.copyText(tmp, 4);
      A.analyze();
      int i=0;
      int j=0;
      int k=0;
      int g=0;
      A.stat(i,j, k, g);
      EXPECT_EQ(false, A.isAllBracketsClose());
      EXPECT_EQ(3, i);
      EXPECT_EQ(1,j);
      EXPECT_EQ(2, k);
      EXPECT_EQ(0,g);   
   }
   
   TEST(bracketTest, triangularBracketCorrectScryptFalse2)
   {
      char tmp[]="<<<<<";
      TriangularAnalyzer A;
      A.copyText(tmp, 5);
      A.analyze();
      int i=0;
      int j=0;
      int k=0;
      int g=0;
      A.stat(i,j, k, g);
      EXPECT_EQ(false, A.isAllBracketsClose());
      EXPECT_EQ(5, i);
      EXPECT_EQ(0,j);
      EXPECT_EQ(5, k);
      EXPECT_EQ(0,g);     
   }
   
   TEST(bracketTest, triangularBracketCorrectScryptFalse3)
   {
      char tmp[]=">>>>";
      TriangularAnalyzer A;
      A.copyText(tmp, 4);
      A.analyze();
      int i=0;
      int j=0;
      int k=0;
      int g=0;
      A.stat(i,j, k, g);
      EXPECT_EQ(false, A.isAllBracketsClose());
      EXPECT_EQ(0, i);
      EXPECT_EQ(4,j);
      EXPECT_EQ(0, k);
      EXPECT_EQ(4,g); 
   }
   
   TEST(bracketTest, triangularBracketCorrectScryptFalse4)
   {
      char tmp[]="<<>>>>>";
      TriangularAnalyzer A;
      A.copyText(tmp, 7);
      A.analyze();
      int i=0;
      int j=0;
      int k=0;
      int g=0;
      A.stat(i,j, k, g);
      EXPECT_EQ(false, A.isAllBracketsClose());
      EXPECT_EQ(2, i);
      EXPECT_EQ(5,j);
      EXPECT_EQ(0, k);
      EXPECT_EQ(3,g);  
   }
   
   TEST(bracketTest, triangularBracketCorrectScryptFalse5)
   {
      char tmp[]=">>><<";
      TriangularAnalyzer A;
      A.copyText(tmp, 5);
      A.analyze();
      int i=0;
      int j=0;
      int k=0;
      int g=0;
      A.stat(i,j, k, g);
      EXPECT_EQ(false, A.isAllBracketsClose());
      EXPECT_EQ(2, i);
      EXPECT_EQ(3,j);
      EXPECT_EQ(2, k);
      EXPECT_EQ(3,g);   
   }
   TEST(bracketTest, triangularBracketCorrectScryptFalse6)
   {
      char tmp[]=">><<<";
      TriangularAnalyzer A;
      A.copyText(tmp, 5);
      A.analyze();
      int i=0;
      int j=0;
      int k=0;
      int g=0;
      A.stat(i,j, k, g);
      EXPECT_EQ(false, A.isAllBracketsClose());
      EXPECT_EQ(3, i);
      EXPECT_EQ(2,j);
      EXPECT_EQ(3, k);
      EXPECT_EQ(2,g);    
   }
   
   TEST(bracketTest, triangularBracketCorrectScryptFalse7)
   {
      char tmp[]="<><><<>><<>";
      TriangularAnalyzer A;
      A.copyText(tmp, 11);
      A.analyze();
      int i=0;
      int j=0;
      int k=0;
      int g=0;
      A.stat(i,j, k, g);
      EXPECT_EQ(false, A.isAllBracketsClose());
      EXPECT_EQ(6, i);
      EXPECT_EQ(5,j);
      EXPECT_EQ(1, k);
      EXPECT_EQ(0,g);   
   }
   
   TEST(bracketTest, isAllBracketsTestTrue1)
   {
      char tmp[]="((<<)[[>)]{}]>";
      Analyzer* A;
      RoundAnalyzer round;
      SquareAnalyzer square;
      TriangularAnalyzer triangular;
      CurlyAnalyzer curly;
      A=& round;
      A->copyText(tmp, 14);
      A->analyze();
      EXPECT_EQ(true, A->isAllBracketsClose());
      A=& square;
      A->copyText(tmp, 14);
      A->analyze();
      EXPECT_EQ(true, A->isAllBracketsClose());
      A=& triangular;
      A->copyText(tmp, 14);
      A->analyze();
      EXPECT_EQ(true, A->isAllBracketsClose());
      A=& curly;
      A->copyText(tmp, 14);
      A->analyze();
      EXPECT_EQ(true, A->isAllBracketsClose());
   }
}

int main()
{
   testing::InitGoogleTest();
   return RUN_ALL_TESTS();
}
