#include<stdio.h>
main(){
	float Principal, ROI, Amount, CI, Time;
	printf("Enter Principal amount: ");
	scanf("%f",&Principal);
	printf("Enter Rate of Interest: ");
	scanf("%f",&ROI);
	printf("Enter time in years: ");
	scanf("%f",&Time);
	
	Amount=Principal*(1+(0.01*ROI));
	CI=Amount-Principal;
	
	printf("Compound Interest is Rs. %.2lf",CI);
}
