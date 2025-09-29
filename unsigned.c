#include <stdio.h>
int main(){
	unsigned char ch = '½';
	scanf("%c", &ch);
	if ((ch >='A' && ch<='Z') || (ch>='a' && ch<='z')) // 10<=A>=20
		printf("%c is an alphabet", ch);
	else
		printf("%c is not an alphabet",ch);
	return 0;
}
