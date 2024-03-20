#include<stdio.h>
main(){
	int kilometers,meters;
	printf("Enter distance in kilometers: ");
	scanf("%d",&kilometers);
	
	meters=kilometers*1000;
	
	printf("\nDistance in meters is %d",meters);
}
