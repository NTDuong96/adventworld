#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int integer1;
	int integer2;
	int integer3;
	int sum;
	int average;
	
	printf("Nhap Toan\n");
	scanf("%d, &integer1");
	
	printf("Nhap Ly\n");
	scanf("%d, &integer2");
	
	printf("Nhap Hoa\n");
	scanf("%d, &integer3");
	
	sum = integer1 + integer2 + integer3;
	
	printf("Tong %d\n", sum);
	
	average = sum/3;
	
	printf("Trung binh %d\n", average);
	return 0;
}