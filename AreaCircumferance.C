#include<stdio.h>
#define PI 3.14
int main(){
	float radius,area,circumferance;
	printf("Enter raduis\n");
	scanf("%f",&radius);
	
	area=PI*radius*radius;
	circumferance=2*PI*radius;
	
	printf("Area of circle is :%.2lf\n",area);
	printf("Circumferance of circle is :%.2lf",circumferance);
}
