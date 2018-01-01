#ifdef __cplusplus
extern "C" {
#endif

#include "test.h"

#ifdef __cplusplus
}
#endif

#include "CppUTest/CommandLineTestRunner.h"

TEST_GROUP(FirstTestGroup)
{
};

TEST(FirstTestGroup, FirstTest)
{
  Test a;
  Test_init(&a);
}

int main(int argc, char **argv)
{
  return CommandLineTestRunner::RunAllTests(argc, argv);
}
