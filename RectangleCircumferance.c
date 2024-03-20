#include<stdio.h>
main(){
	int width,length,circumferance;
	printf("Enter width: ");
	scanf("%d",&width);
	printf("Enter length: ");
	scanf("%d",&length);
	
	circumferance=2*(length+width);
	
	printf("Circumferance of rectangle is %d",circumferance);
}
