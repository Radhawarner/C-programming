#include <stdio.h>
//Version 3.0
int main(){
	unsigned long long int n, rev=0;
	scanf("%llu", &n);
	while(rev=rev*10+n%10,n/=10);
	printf("%llu\n", rev);
	return 0;
}
