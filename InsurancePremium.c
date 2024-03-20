#include<stdio.h>
main(){
	float salary, insurance;
	printf("Enter your salary: ");
	scanf("%f",&salary);
	
	insurance=salary*0.1;
	
	printf("\nYour insurance premium is Rs. %.2lf",insurance);
}
