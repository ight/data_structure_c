#include <stdio.h>
int main()
{
  int i;
  double num, sum = 0.0;

  for(i = 0; i <= 10; i++)
  {
    printf("Enter Postive number to terminate and negative to keep adding");
    scanf("%lf", &num);
    if(num > 0)
    {
      break ; // break when negative
    }
    sum  += num;
  }
  printf("Sum of the entered number is: %lf\n", sum);
  return 0;
}   