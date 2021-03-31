#include <iostream>
#include "..\UnitTest++\UnitTest++.h"
#include "concatRemFunction.h"


TEST(Simenes1)
{
   std::string s,t;
   int k;

   s = "bla bla bla bla";
   t = "blablabcde";
   k = 8;

   CHECK_EQUAL(ConcatRemove(s,t,k), true);
}

TEST(Simenes2)
{

   std::string s,t;
   int k;



   s = "tab";
   t = "tab";
   k = 7;
CHECK_EQUAL(ConcatRemove(s,t,k), true);

}
TEST(Simenes3)
{
   std::string s,t;
   int k;


   s = "hernani";
   t = "nani";
   k = 5;
CHECK_EQUAL(ConcatRemove(s,t,k), true);


}
TEST(Simenes4)
{
     std::string s,t;
   int k;


   s = "HERNANi";
   t = "nani";
   k = 2;
CHECK_EQUAL(ConcatRemove(s,t,k), false);

}

TEST(Simenes5)
{

   std::string s,t;
   int k;

   s = "125";
   t = "nani";
   k = 2;
   CHECK_EQUAL(ConcatRemove(s,t,k), false);


}


int main(int, const char *[])
{
   std::cout << UnitTest::RunAllTests();
   system("PAUSE");
   return 0;

}
