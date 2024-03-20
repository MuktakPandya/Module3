#include<stdio.h>
main(){
	float a,b,sum,sub,mul,div,mod;
	printf("Enter no. a: ");
	scanf("%f",&a);
	printf("Enter second no. b: ");
	scanf("%f",&b);
	
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mod=a||b;
	
	printf("a + b is %.2lf\n",sum);
	printf("a - b is %.2lf\n",sub);
	printf("a * b is %.2lf\n",mul);
	printf("a / b is %.2lf\n",div);
	printf("a | b is %.2lf",mod);
}
