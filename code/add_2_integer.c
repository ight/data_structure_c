#include <stdio.h>

int main()
{
  int first_number, second_number, sum;

  printf("Sum of two integer numbers \n");
  printf("Enter the first number: \n");
  scanf("%d", &first_number);
  printf("Enter the second number: \n");
  scanf("%d", &second_number);
  sum = first_number + second_number;
  printf("Sum is: %d \n", sum);
  return 0;
}
