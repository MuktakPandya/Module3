#include<stdio.h>
main(){
	float a,b,c,d,e,average;
	printf("Enter expense A: ");
	scanf("%f",&a);
	
	printf("Enter expense B: ");
	scanf("%f",&b);
	
	printf("Enter expense C: ");
	scanf("%f",&c);
	
	printf("Enter expense D: ");
	scanf("%f",&d);
	
	printf("Enter expense E: ");
	scanf("%f",&e);
	
	average=(a+b+c+d+e)/5;
	
	printf("\nAverage expense is Rs. %.2lf",average);
}
