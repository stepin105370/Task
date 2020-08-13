#include "unity.h"
#include "factorial.h"
#include<string.h>

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}
/*
void test_factorial(void)
{
  TEST_ASSERT_EQUAL(120, factorial(5));
  TEST_ASSERT_EQUAL(720, factorial(6));
}
void test_zero_one(void)
{
  TEST_ASSERT_EQUAL(1, factorial(0));
  TEST_ASSERT_EQUAL(1, factorial(1));
}
void test_negative(void)
{
  TEST_ASSERT_EQUAL(-1, factorial(-5));
  TEST_ASSERT_EQUAL(-1, factorial(-10));
}*/


void test_stringSplit(void)
{
     char str1[80] = "my_name_is_edcast_future_skills";
	 char *arr1[100];

  char  *cmparr[]={ "my", "name", "is", "edcast", "future", "skills"};
  factorial(str1,arr1);
// char arr122[]=cmparr[0];
 //char arr123[]=arr1[0];
 //printf("%s",cmparr[0]);
 for(int i=0;i<5;i++)
  TEST_ASSERT_EQUAL(strcmp(cmparr[i],arr1[i]),0);

}

void test_underscoreBetweenSubstrings(void)
{
     char str1[80] = "my_name_is_edc_ast_fut_ure_skills";
	 char *arr1[100];

  char  *cmparr[]={ "my", "name", "is", "edc","ast", "fut","ure", "skills"};
  factorial(str1,arr1);
// char arr122[]=cmparr[0];
 //char arr123[]=arr1[0];
 //printf("%s",cmparr[0]);
 for(int i=0;i<7;i++)
  TEST_ASSERT_EQUAL(strcmp(cmparr[i],arr1[i]),0);

}

int test_main(void)
{
    RUN_TEST(test_stringSplit);
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  //RUN_TEST(test_factorial);
  //RUN_TEST(test_zero_one);
  //RUN_TEST(test_negative);
   RUN_TEST(test_stringSplit);
    RUN_TEST(test_underscoreBetweenSubstrings);
  /* Close the Unity Test Framework */
  return UNITY_END();
}
