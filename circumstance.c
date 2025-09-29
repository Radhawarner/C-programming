
#include <stdio.h>
#include <math.h>
int main(){
	long int principal;
	double rate, years, interest;
	scanf("%ld %lf %lf", &principal, &rate, &years);
	interest = principal * pow(1+rate/100, years);
	printf("Interest Amount : %lf", interest);

	return 0;
}
