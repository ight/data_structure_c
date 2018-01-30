#include <stdio.h>
int main()
{
  int count, num_one = 0, num_two = 1, next_num, i;

  printf("Enter series size: \n");
  scanf("%d", &count);

  printf("Fibonacci of %d length: ", count);
  for(i = 1; i <= count; i++)
  {
    printf(",%d ", num_one);
    next_num = num_one + num_two;  // This is very simalar to swap logic of to number
    num_one = num_two;
    num_two = next_num;
  }

  return 0;
}