#include<stdio.h>
main(){
	int salary, annual;
	printf("Enter your monthly salary: ");
	scanf("%d",&salary);
	
	annual=salary*12;
	
	printf("\nYour annual salary is Rs. %d",annual);
}
