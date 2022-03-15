#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int r;
	
	printf("Nhap num\n");
	scanf("%d", &r);
	
	if(r/2 == 0){
		printf("num la so chan");}
	else
	printf("num la so le");

	return 0;
}