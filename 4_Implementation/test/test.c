#include "unity.h"
#include "lms_operations.h"

/* Modify these two lines according to the project */
#include <lms_operations.h>
#define PROJECT_NAME    "Library Management System"

/* Prototypes for all the test functions */
void test_addbook(void);
void test_viewbook(void);
void test_issue(void);
void test_ret(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_addbook);
  RUN_TEST(test_viewbook);
  RUN_TEST(test_issue);
  RUN_TEST(test_ret);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(SUCCESS, login("user id", "password"));
  TEST_ASSERT_EQUAL(1, addbook("list of books", "available"));
}
void test_add_testcase2(void) {
 
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(Incorrect user id or password, login("user id, "password"));
}
void test_viewbook(void) {
  TEST_ASSERT_EQUAL(SUCCESS, find_by_id("user id", "book id"));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(UNSUCCESS, find_by_id("user id", "book id"));
}

void test_issue(void) {
  TEST_ASSERT_EQUAL(SUCCESS, issue("book id", "problem"));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(UNSUCCESS, issue("issue", "book id"));
}

void test_ret(void) {
  TEST_ASSERT_EQUAL(SUCCESS, return_book("user id", "book id"));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(UNSUCCESS, return_book("book id", "user id"));
}
