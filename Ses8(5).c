#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int num1,num2,res;
	char op;
	num1 = 37;
	num2 = 90;
	op = '-';
	
	switch(op)
	{
		case '+':
			res=num1+num2;
			printf("\n The sum is: %d",res);
			break;
		case '-':
			res=num1-num2;
			printf("\n Number after subtraction: %d",res);
			break;
		case '/':
			res=num1/num2;
			printf("\n Number after division: %d",res);
			break;
		case '*':
			res=num1*num2;
			printf("\n Number after multiplication: %d",res);
			break;
		default:
			printf("\n Invalid");
		break;
	}
	return 0;
}