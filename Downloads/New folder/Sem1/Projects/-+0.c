#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x;
    printf("Nhap x=");
    scanf("%d", &x);

    if(x == 0){
    	printf("x bang 0");
	}
	
	if(x > 0){
		printf("x la so nguyen duong");
    }
    
    if(x < 0){
    	printf("x la so nguyen am");
	}
	return 0;
}