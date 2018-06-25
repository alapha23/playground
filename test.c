#include <time.h>
#include "test.h"
#include "test.h"

int a = 0;
int b = 1;

int main(void)
{
  do_sth();
  a++;
  b--;
  return 0;
}

void do_sth(){
  time_t sec = time(NULL);
  printf("%ld\n", sec);
}
