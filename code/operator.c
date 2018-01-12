#include <stdio.h>
int main()
{
  // lets take three variables
  int variable_one = 5, variable_two = 9;
  int result;

  // lets do some operation

  // Arithmetic
  // Addition operator 
  printf("Adition using + \n");
  result = variable_one + variable_two;
  printf("%d + %d = %d \n", variable_one, variable_two, result);

  // Subtraction operation
  printf("Subtraction using - \n");
  result = variable_two - variable_one;
  printf("%d - %d = %d \n", variable_two, variable_one, result);

  //Multiplication operator
  printf("Multiplication using * \n");
  result = variable_one * variable_two;
  printf("%d * %d = %d \n", variable_one, variable_two, result);

  //Division operator
  // have use %% to print % as % 
  printf("Division using %% \n");
  result = variable_two % variable_one;
  printf("%d %% %d = %d \n", variable_two, variable_one, result);

  return 0;
}