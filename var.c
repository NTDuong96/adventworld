#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() 
{
	int a,b;
	a = 13;
	b = 3;
	printf("So nguyen la: %d & %d\n", a, b);
	printf("Tong 2 so: %d\n", a+b);
	printf("Hieu 2 so: %d\n, a-b");
	printf("Tich 2 so: %d\n", a*b);
	printf("Thuong so cua a va b: %d\n", a/b);
	printf("Ti so giua a va b: %d\n", a%b);
	getchar();
	return 0;
}