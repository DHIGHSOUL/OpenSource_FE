#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* mycopy(int argc, char** argv)
{
  int len = 0;
  for (int i=1; i<argc; i++)
    len += (strlen(argv[i]) + 1);

  char* buf = (char*)malloc(sizeof(char)*len);
  int cnt = 0;
  for (int i=1; i<argc; i++) {
    for (int j=0; j<strlen(argv[i]); j++) {
      buf[cnt] = argv[i][j];
      cnt++;
    }
    buf[cnt++] = ' ';
  }
  buf[len-1] = '\0';
  return buf;
}

char* reversecopy(int argc, char** argv)
{
  char* str = mycopy(argc, argv);
  char* buf = (char*)malloc(strlen(str)+1);
  printf("%s\n", str);
  int len = strlen(str);
  for (int i=0; i< strlen(str); i++) {
    buf[len-i-1] = str[i];
  }
  return buf;
}

int getLastNumber(char** argv) {
  char *lastNumString = argv[2];
  int lastNum;
  lastNum+=atoi(lastNumString[6])*10;
  lastNum+=atoi(lastNumString[7]);

  return lastNum;
}