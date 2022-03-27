#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sum,choice,sl,gia;
	sum = 0;
	char chon;
	do{
		printf("Menu:");
		printf("\n1. Coffee");
		printf("\n2. Sinh to");
		printf("\n3. Tra");
		printf("\n4. Sua chua \n");
		scanf("%d", &choice);
	switch(choice){
	    case 1:
	    	gia=40000;
	    	printf("\nGia coffee: %d", gia);
	    	printf("\nSo luong: ");
	    	scanf("%d",&sl);
	    	printf("%d coffee",sl);
	    	sum += sl*gia;
	    	printf("\nTong gia %d",sum);
	    	break;
	    case 2:
	    	gia=30000;
	    	printf("\nGia sinh to: %d",gia);
	    	printf("\nSo luong: ");
	    	scanf("%d",&sl);
	    	printf("%d sinh to",sl);
	    	sum += sl*gia;
	    	printf("\nTong gia %d",sum);
	    	break;
	    case 3:
	    	gia=35000;
	    	printf("\nGia tra: %d",gia);
	    	printf("\nSo luong: ");
	    	scanf("%d",&sl);
	    	printf("%d tra",sl);
	    	sum += sl*gia;
	    	printf("\nTong gia %d",sum);
	    	break;
	    case 4:
	    	gia=40000;
	    	printf("\nGia sua chua: %d",gia);
	    	printf("\nSo luong: ");
	    	scanf("%d",&sl);
	    	printf("%d coc sua chua",sl);
	    	sum += sl*gia;
	    	printf("\nTong gia %d",sum);
	    break;}
	    	printf("\nBan co muon order them do uong (Y/N)? \n");
	    	fflush(stdin);
	    	scanf("%c",&chon);
	}while(chon=='Y'|| chon=='y' && chon!='n'|| chon!='N');
	printf("Tong gia %d\n",&sum);
	printf("Have a nice day :D");
	return 0;
}