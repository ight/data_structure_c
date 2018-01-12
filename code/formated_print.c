#include <stdio.h>

int main()
{
	int integer_number = 1234;
	float decimal_number = 1234.567;
	printf("Let's try printing and guess the out put \n");

  //lets format the integer
  printf("lets shif the number to 8th column: %06d\n", integer_number);
  printf("lets shif the number to 6th column: %08d\n", integer_number);
  printf("lets shif the number to 4th column: %06d\n", integer_number);
  printf("lets shif the number to 2th column: %08d\n", integer_number);

  printf("lets try round up on decimal_number: %.3f\n", decimal_number);
  printf("lets try round up on decimal_number: %.2f\n", decimal_number);
  printf("lets try round up on decimal_number: %.1f\n", decimal_number);
  printf("lets try round up on decimal_number: %.0f\n", decimal_number);

  printf("lets put decimal_number in exponentia notatio: %e\n", decimal_number);
  return 0;	 	
}