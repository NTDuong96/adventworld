#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int x;
    
    printf("Enter choice (1-3):");
    scanf("%d", &x);
    if(x==1)
       printf("\nChoice = 1");
    else if(x==2)
       printf("\nChoice = 2");
    else if(x==3)
       printf("\nChoice = 3");
    else
       printf("\nInvalid choice");
	return 0;
}