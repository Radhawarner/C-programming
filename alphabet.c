#include <stdio.h>
int main(){
	char ch;
	scanf("%c", &ch);
	if ((ch >='A' && ch<='Z') || (ch>='a' && ch<='z')) {// 10<=A>=20
		printf("'%c' is an alphabet", ch);
		printf("Thank you so much for being very very interactive!");
	}
	else{
		printf("'%c' is not an alphabet",ch);
	}
	return 0;
