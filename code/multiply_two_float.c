#include <stdio.h>

int main()
{
  float first_number, second_number, sum;

  printf("Sum of two integer numbers \n");
  printf("Enter the first number: \n");
  scanf("%f", &first_number);
  printf("Enter the second number: \n");
  scanf("%f", &second_number);
  sum = first_number * second_number;
  printf("Sum is: %f \n", sum);
  return 0;
}
