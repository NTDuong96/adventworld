#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float com,sales_amt;
	char grade;
	printf("Enter the sales amount:");
	scanf("%f",&sales_amt);
	printf("\nEnter the grade:");
	scanf(" %c",&grade);	
	if(sales_amt>10000)
	   if(grade=='A')
	      com=sales_amt*0.1;
	   else
	      com=sales_amt*0.08;
	else
	   com=sales_amt*0.05;
	printf("\nCommission=%f",com);
	return 0;
}