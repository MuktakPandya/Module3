#include<stdio.h>
main(){
	int Age;
	printf("Enter Age");
	scanf("%d",&Age);
	
	
	if (Age<60)
		{
			if(Age<18)
			{
				printf("Can not vote and can not do job");
			}
			else
			{
				printf("Can vote and can do job");
			}
	}
		else 
			{
			printf("Can vote but can not do job");
			}
}
