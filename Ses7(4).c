#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char c;
	printf("Enter a character:");
	scanf("%c",&c);
	if(c>='A' && c<='Z')
	printf("Lowercase character=%c",c + 'a' - 'A');
	else
	printf("Character entered is=%c",c);
	return 0;
}