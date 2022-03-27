#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int pin=123;
	int mypin;
	int count=0;
	int menu=0;
	int rut,du=1000000,duht;
	char tiep;
	do{
		printf("Nhap ma Pin:");
		scanf("%d", &mypin);
		count++;
	} while (mypin != pin && count<3);
	
	if(mypin==pin){
		printf("Login thanh cong!\n Menu \t1 \t2 \t3 \t4 \n");
		scanf("%d", &menu);
		switch(menu){
	do{
		case 1:
			printf("\nCheck balance");
			printf("\nDu hien tai: % VND", du);
			break;
		case 2:
			printf("\nRut tien :v \nNhap so tien ban muon rut: ");
			scanf("%d", &rut);
			if(rut<=du)
			{
				duht=du-rut;
				printf("Rut thanh cong!");
				printf("\nBan con lai %d VND trong tai khoan",duht);
			}
			break;
		case 3:
			printf("\nSo tiet kiem?");
			break;
		case 4:
			printf("\nExit 404 not found");
			break;
		default:
			printf("\n Chon menu");
		break;
	}while(menu!=0 && menu<4 && tiep == 'Y');
	}   printf("\nBan co tiep tuc giao dich khong? (Y/N): ");
	    fflush(stdin);
		scanf("%c",&tiep);
	}
	else{
		printf("The pin cua ban bi khoa :v #np Astronomia");
	}
	return 0;
}