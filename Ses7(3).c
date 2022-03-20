#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num,res;
	printf("Enter a number:");
	scanf("%d",&num);
	res=num%2;
	if(res==0)
	printf("Number is even");
	else
	printf("Number is odd");
	return 0;
}