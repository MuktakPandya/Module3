#include<stdio.h>
main(){
	int length, height, width, Area;
	printf("Enter length: ");
	scanf("%d",&length);
	printf("Enter height: ");
	scanf("%d",&height);
	printf("Enter width: ");
	scanf("%d",&width);
	
	Area=2*(length+height+width);
	
	printf("Area of rectamgular prism is %d",Area);
}
