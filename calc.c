#include<stdio.h>

int main() {
  int n1, n2, r;
  n1 =  n2 = r = 0;
  char op;

  printf("n1: ");
  scanf("%d", &n1);

  printf("n2: ");
  scanf("%d", &n2);

  printf("Operator (+, -, *, /)? ");
  scanf(" %c", &op);

  switch (op) {
    case '+':
      r = n1 + n2;
      break;
    case '-':
      r = n1 - n2;
      break;
    case '*':
      r = n1 * n2;
      break;
    case '/':
      r = n1 / n2;
      break;
    default:
      printf("Unknown operator: %c\n", op);
      break;
  }

  printf("Result: %d\n", r);
  return 0;
}

