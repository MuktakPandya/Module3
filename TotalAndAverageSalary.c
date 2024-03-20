#include<stdio.h>
main(){
	float A,B,C,D,E,total,average;
	
	printf("Enter Salary of person A: ");
	scanf("%f",&A);

	printf("Enter Salary of person B: ");
	scanf("%f",&B);
	
	printf("Enter Salary of person C: ");
	scanf("%f",&C);
	
	printf("Enter Salary of person D: ");
	scanf("%f",&D);
	
	printf("Enter Salary of person E: ");
	scanf("%f",&E);
		
	total=A+B+C+D+E;
	printf("\nTotal salary of 5 employees is %.2lf",total);
	
	average=total/5;
	printf("\n\nAverage salary of 5 employees %.2lf",average);
}
