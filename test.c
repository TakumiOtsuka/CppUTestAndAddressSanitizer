#include "test.h"
#include <string.h>

void Test_init(Test *t)
{
  strcpy(t->a, "012345678901111111111111111");
}

//int main(int argc, char **argv)
//{
//  Test t;
//  Test_init(&t);
//  return 0;
//}
