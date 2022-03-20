#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x,y;
	
	printf("Enter choice (1-3):");
	scanf("%d",&x);
	if(x==1)
	{
		printf("\nEnter y value (1-5):");
		scanf("%d",&y);
		if(y<=5)
		  printf("\nValue for y: %d",y);
		else
		  printf("\nValue of y exceeds 5");
	}
	else
	    printf("\nChoice entered was not 1");
	return 0;
}