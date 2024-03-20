#include<stdio.h>
main(){
	int base,exp,result;
	printf("Enter exponent");
	scanf("%d",&exp);
	printf("Enter power");
	scanf("%d",&base);
	
	while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer = %.2Lf", result);
    return 0;
}
