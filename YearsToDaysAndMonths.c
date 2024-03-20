#include<stdio.h>
main(){
	int years,days,months;
	printf("Enter no. of years: ");
	scanf("%d",&years);
	
	days=years*365;
	months=years*12;
	
	printf("No. of days: %d and no. of months is %d",days,months);
}
