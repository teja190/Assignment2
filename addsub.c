#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	char a;
	while(1)
	{
		printf("a.add\nb.sub\n");
		scanf("%c",&a);
		switch(a)
		{
			case 'a':
				printf("\nenter two digits:");
				scanf("\n%d %d",&i,&j);
				printf("\nThe sum is:%d\n",i+j);
				continue;
			case 'b':
				printf("\nenter two digits:");
				scanf("\n%d %d",&i,&j);
				printf("\nThe difference is:%d\n",i-j);
				continue;
			default:
				printf("No action\n");
				break;
		}
	}
	return 0;
}
