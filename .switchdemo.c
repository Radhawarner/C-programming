#include<stdio.h>

int main(){
	int day;
	scanf("%d", &day);
	switch(day){
		case 1: // Monday
			printf("It's Monday. Concentrate in work.\n");break ;
		case 2 ... 4:
			printf("Still it's week day only.");break ;
		case 5:
			printf("It's Friday. Get ready for week end.");break ;
		case 6: case 7:
			printf("Enjoy your week-end."); break;
		default:
			printf("Invalid day number!");
	return 0;
}
}
