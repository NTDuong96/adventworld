#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int r;
	int S;
	int C;
	
	printf("Nhap r= ");
	scanf("%d", &r);
	S=(3.14*r*r);
	C=(2*3.14*r);
	
	if(r>0)
	{
	printf("Dien tich hinh tron %d\n", S);
	printf("Chu vi hinh tron %d\n", C);
    }
    else
    {
    printf("Invalid input");
	}
	return 0;
}