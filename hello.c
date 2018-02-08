#include<stdio.h>

int main(int argc, char *args[]) {
  if (argc == 1) {
    args[1] = "World";
  }
  printf("Hello, %s!\n", args[1]);
  return 0;
}

