#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num1,num2;
	num1=90;
	num2=78;
	
	if(num1==num2)
	  printf("\n Two numbers are equal");
	else if(num1<num2)
	  printf("\n The larger number is %d",num2);
	else
	  printf("\n The larger number is %d",num1);
	return 0;
}