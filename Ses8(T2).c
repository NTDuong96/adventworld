#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char letter;
	
	printf("\nLet's enter your letter!");
	scanf("%c", &letter);
    if(letter>='A' && letter<='Z')
       printf("Your input letter is %c", letter + 'a' - 'A');
    else
	switch(letter){
		case 'a':
			printf("\n Ada");
			break;
		case 'b':
			printf("\n Using Basic right? :D");
			break;
		case 'c':
			printf("\n COBOL");
			break;
		case 'd':
			printf("\n Isn't it dBASE Mk. III?");
			break;
		case 'f':
			printf("\n Fortress-- Oops, it's Fortran!");
			break;
		case 'p':
			printf("\n Back to Pascal - maybe?");
			break;
		case 'v':
		    printf("\n Using Visual C++ yay~!");
		    break;
		default:
			printf("\n Not using any language? Give it a try again! ;D");
		break;
	}
	return 0;}