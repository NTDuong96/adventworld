#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int M1;
	int M2;
	int M3;
	float per;
	char grade;
	
	printf("Enter M1 grade: ");
	scanf("%d", &M1);
	printf("Enter M2 grade: ");
	scanf("%d", &M2);
	printf("Enter M3 grade: ");
	scanf("%d", &M3);
	printf("Average score? \n", per);
	per = (M1+M2+M3)/3;
	
	if(per>=90)
	   printf("Woohoo, E+ grade!");
	else if(per<90 && per >=80)
	   printf("E grade but still fine!");
	else if(per<80 && per >=70)
	   printf("A+ grade, little more effort~");
	else if(per<70 && per >=60)
	   printf("No prob with A grade");
	else if(per<60 && per >=50)
	   printf("B+ grade, try your best!");
	else
	   printf("Dont worry, better luck next time~");
	return 0;
}