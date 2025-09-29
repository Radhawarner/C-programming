#include <stdio.h>

int main(){
	int x;
	scanf("%d", &x);
	if ( x > 0 )
		printf("+ve");
	else if (x < 0)
		printf("-ve");
	else
		printf("Zero");
		x>0?printf("+ve"):(x<0?printf("-ve"):printf("zero"));
	return 0;
}
