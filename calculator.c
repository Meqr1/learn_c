#include <stdio.h>
int main() {
  int num1, num2;
  char operation;

  printf("enter First number: ");
  scanf("%d", &num1);

  printf("enter second number: ");
  scanf("%d", &num2);

  getchar();

  printf("enter operation: ");
  scanf("%c", &operation);

  switch (operation) {
  case '+':
    printf("%d + %d = %d", num1, num2, num1 + num2);
    break;
  case '-':
    printf("%d - %d = %d", num1, num2, num1 - num2);
    break;
  case '*':
    printf("%d * %d = %d", num1, num2, num1 * num2);
    break;
  case '/':
    printf("%d / %d = %d", num1, num2, num1 / num2);
    break;
  default:
    return 0;
    printf("invalid operation");
  }

  return 0;
}
