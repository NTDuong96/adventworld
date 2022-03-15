#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int num1;
	int num2;
	
	printf("Enter two integers,\n");
	printf("and will see the relations between:");
	
	scanf("%d%d", &num1, &num2);
	
	if(num1 = num2){
		printf("%d is equal to %d\n", num1, num2);
	}
	
	if(num1 != num2){
		printf("%d is not equal to %d\n", num1, num2);
	}
	
	if(num1 < num2){
		printf("%d is less than %d\n", num1, num2);
	}
	
	if(num1 > num2){
		printf("%d is greater than %d\n", num1, num2);
	}
	
	if(num1 <= num2){
		printf("%d is less than or equal to %d\n", num1, num2);
	}
	
	if(num1 >= num2){
		printf("%d is greater than or equal to %d\n", num1, num2);
	}
	
	return 0;
}