#include<stdio.h>
main(){
	float salary,insurance,loan,remaining;
	printf("Enter your monthly salary: ");
	scanf("%f",&salary);
	
	insurance=salary*0.1;
	loan=salary*0.1;
	remaining=salary-insurance-loan;
	
	printf("\nYour remaining salary after deducting insurance and loan amount is Rs. %.2f",remaining);
}
