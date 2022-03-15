#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int USD=1;
	int VND=23000;
	int Exchangerate;
	
	printf("USD = ");
	scanf("%d", &USD);
	
	Exchangerate = USD*VND;
	printf("Exchangerate %d\n", Exchangerate);
	return 0;
}