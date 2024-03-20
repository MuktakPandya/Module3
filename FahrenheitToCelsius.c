#include<stdio.h>
main(){
	float fahrenheit,celsius;
	printf("Enter temperatute in fahrenheit: ");
	scanf("%f",&fahrenheit);
	
	celsius=(fahrenheit-32)*5/9;
	
	printf("Temperature in celsius is %.2lf degrees",celsius);
}
