#include<stdio.h>
int main()
{
	int x;
	printf("even numbers are : ");
	for(x=1;x<=100;x++)
	{
		if(x%2==0)
		{
		    
			printf("%d, ",x);
		}
	}
	
	printf("\nodd numbers are : ");
	for(x=1;x<=100;x++)
	{
		if(x%2!=0)
		{
			printf("%d, ",x);
		}
	}
}
