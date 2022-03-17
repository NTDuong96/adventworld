#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a=80;
	char b='C';
	printf("\nThis is a number atored in 'a' %d",a);
	printf("\nThis is a character interpreted from 'a' %c",a);
	printf("\nThis is also a character stored in 'b' %c",b);
	printf("\nBut, the character of 'b' is printed as a number!%d",b);
	return 0;
}