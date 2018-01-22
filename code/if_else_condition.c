#include <stdio.h>
int main()
{
  int number;
  printf("Enter a number Postive or Negative we will tell you :)\n");
  scanf("%d", &number);

  // let's adde the condition if..else to check the user input
  if (number > 0)
  {
    printf("%d, is postive\n", number);
  }
  else
  {
    printf("%d, is negative number\n", number);
  }

  // Did you see that condition does not have ; at the end
  // if stand true then postive print if stand false next line 
  // that is negative printed.
  printf("All Done!\n");
  return 0;
}