#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int array[5];
	int i,max,min,sum;
	float avg;
	for(i=0;i<5;i++)
	{
		printf("\n Nhap so cho mang: %d:",i+1);
		scanf("%d",&array[i]);
	}
	max=array[0];
	for(i=0;i<5;i++)
	{
		if(array[i]>max)
		max=array[i];
	}
	printf("\nSo to nhat cua mang la %d",max);
	min=array[0];
	for(i=0;i<5;i++)
	{
		if(array[i]<min)
		min=array[i];
	}
	printf("\nSo nho nhat cua mang la %d",min);
	sum=array[0];
	for(i=0;i<5;i++)
	{
		sum+=array[i];
	}
	printf("\nTong gia tri cua mang: %d",sum);
	for(i=0;i<5;i++)
	{
		avg+=array[i];
	}
	printf("\nGia tri trung binh cua mang: %.6f",avg/5);
	return 0;
}