#include <stdio.h>
int main()
{
	char chr;
	printf("Enter a charater: ");
	scanf("%c", &chr);
	printf("You have entered %c \n", chr);
	printf("ASCII value %c id %d \n", chr, chr);
	return 0;
}
