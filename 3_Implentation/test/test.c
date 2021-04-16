#include "unity.h"
#include "prototypes.h"

#define PROJECT_NAME    "512_game"




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
  RUN_TEST(starting);
  RUN_TEST(Display);
  RUN_TEST(Up);
  RUN_TEST(wait);

 /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void starting() {
   TEST_PASS();  
}

void Display() {
   TEST_PASS();  
}

void Up() {
        TEST_PASS(); 

}
void wait() {
     TEST_PASS(); 
}
