#ifndef TEST_INCLUDED
#define TEST_INCLUDED

typedef struct Test {
  char a[10];
  int b;
} Test;

void Test_init(Test *t);
#endif // TEST_INCLUDED
