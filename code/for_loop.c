#include <stdio.h>
int main()
{
  int counter; //just declare the counter
  int start = 0; //declare and initilize the initial value
  int end = 10; // declare and initilize the end value.
  int sum = 0; //declare and imtialize sum
  printf("We will find the sum for number from 0..10\n");
  for(counter = 0; counter <= end; counter++)
  {
    sum = sum + counter;
  }
  printf("The sum of numbers from 0..10: %d \n", sum);
  return 0;
}