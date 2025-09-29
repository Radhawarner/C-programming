#include <stdio.h>
int main(){
	int x, cnt=0;
	scanf("%d", &x);
	//method 1
	if (x == 1)
		printf("Neither prime not composite!");
	else{
		for (int i = 1; i<=x; i++){
			if (x % i==0)
				cnt++;
		}
		if (cnt == 2)
			printf("Prime");
		else
			printf("Not Prime");
	}
	return 0;
}
