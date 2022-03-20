#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float com,sales_amt;
	printf("Enter sales amount:");
	scanf("%f",&sales_amt);
	if(sales_amt>=10000)
	  com=sales_amt*0.1;
	printf("\nCommission = %f",com);
	return 0;
}