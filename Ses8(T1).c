#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x,y;
	printf("Enter a number lower than 2000 or greater than 3000:");
	scanf("%d", &x);
	printf("and a second number range between 100 to 500:");
	scanf("%d", &y);
	if(x<2000 || x>3000){	
		printf("\n Okay, x is here: %d", x);}
	else printf("\n Well give it another input for x :D");
	
	if(y>=100 && y<=500){
		printf("\n Great job, y number is: %d", y);}
	else printf("\n Problem with keyboard? Try input y again~");
	return 0;
}