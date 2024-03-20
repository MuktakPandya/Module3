#include<stdio.h>
main(){
	float height,breadth,area;
	printf("Enter height:");
	scanf("%f",&height);
	printf("Enter breadth:");
	scanf("%f",&breadth);
	
	area=height*breadth;
	
	printf("Area of triangle is %.2lf",area);
}
