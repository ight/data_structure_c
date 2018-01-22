#include <stdio.h>
int main()
{
  int number;
  printf("Enter a Number:");
  scanf("%d", &number);

  // checking the confition using if
  if (number > 0)
  {
    printf("You Entered a postive value %d \n", number);
  }

  printf("Did you see that negative  value does nothing where postive prints\n");
  return 0;
}