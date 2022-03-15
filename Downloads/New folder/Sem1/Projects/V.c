#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int r;
	int h;
	int V;
	
	printf("Input r= ");
	scanf("%d", &r);
	printf("Input h= ");
	scanf("%d", &h);
	V=2*3.14*r*r*h;
	
	if(r,h>0)
	{
	printf("V %d\n", V);
	}
	else
	{
	printf("Invalid input");
	}
	return 0;
}