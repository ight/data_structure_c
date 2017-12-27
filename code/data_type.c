#include <stdio.h> // include the standard header file or preposessor for input/output
int main ()        // This is the main function which get invoked  when the binary file is excuted
{
	int number;         // this is declaring of variable, and telling the type to be integer
	printf("Enter a value numeric only:"); // This line we are calling the prinf function with argument message.
	scanf("%d", &number);  // We are calling the scanf method with two argument %d which is type formater and &number which is memory address.
	printf("So You Entered: %d \n", number); // calling printf with two parameter message which pass %d to tell the format of the output, and number as the value
	return 0; // main function always return, here we are explictly mention to return 0.
}