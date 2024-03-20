#include<stdio.h>
main(){
	float width,length,area;
	printf("Enter width: ");
	scanf("%f",&width);
	printf("Enter length: ");
	scanf("%f",&length);
	
	area=width*length;
	
	printf("Area of rectangle is %.2lf",area);
}
