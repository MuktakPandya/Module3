#include<stdio.h>
main(){
		int hours, minutes, seconds;
		printf("Enter no. of hours: ");
		scanf("%d",&hours);
		
		minutes=hours*60;
		seconds=minutes*60;
		
		printf("No. of minutes is %d and no. of seconds is %d",minutes,seconds);
		
}
