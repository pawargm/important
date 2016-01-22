#include<stdio.h>
int main()
{
	int i=1;
	int no;
	printf("Enter number");
	scanf("%d",&no);
	while(no>0)
	{
		no=no-i;
		i=i+2;
	}
	if(no==0)
	printf("it is perfect");
	else
	printf("it is not perfect");
	return 0;

}
