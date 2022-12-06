#include <stdio.h>
#include "reverse.h"

int main(int argc, char** argv)
{
  char* str = reversecopy(argc, argv);
  int lastNumber = getLastNumber(argv);
  printf("%s\n", str);
  printf("%d\n", lastNumber);

  return lastNumber;
}