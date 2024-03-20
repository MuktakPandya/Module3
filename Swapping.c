#include<stdio.h>
main(){
	int a,b;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	
	printf("Before swapping a is %d and b is %d\n\n",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swapping a is %d and b is %d",a,b);
}
