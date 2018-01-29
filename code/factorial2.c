#include <stdio.h>
int main()
{
  int number;
  long long  fact;
  // take input of the number
  printf("Enter the number who's factorial has to be found: \n");
  scanf("%d", &number);

  // intilizing fact with default 1
  fact = 1;
  do
  {
    fact *= number;
    number--;
  } while(number > 0);

  printf("Factorial= %lld\n", fact);

  return 0;

}