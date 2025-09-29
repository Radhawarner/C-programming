#include <stdio.h>
int main(){
	int x, y;
	char sign;
	scanf("%d %c %d", &x, &sign, &y);
	switch(sign){
		case '+':
			printf("%d + %d = %d", x, y, x+y);break;
		case '-':
			printf("%d - %d = %d", x, y, x-y);break;
		case 'x': case 'X': case '*':
			printf("%d x %d = %d", x, y, x*y);break;
		case '/':
			//converting x(int) into float --> explicit type casting
			printf("%d / %d = %g", x, y, (float)x/y);break;
		case '%':
			printf("%d %% %d = %d", x, y, x%y);break;
		default:
			printf("Invalid operation!");
	}
	return 0;
}
