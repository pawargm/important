#include<stdio.h>

int fact(int n)
{
	int sum=1;
	if(n==0)
	return 1;
	while(n>1)
	{
		sum=sum*n;
		n--;
	}
	return sum;

}


int main(void)
{
	int no;
	scanf("%d",&no);
	
	int i,j,k;
	
	for(i=0;i<no;i++)
	{
		for(j=0;j<=(no-i-2);j++)
		printf("0");
		
		for(k=0;k<=i;k++)
		{
			int a=fact(i)/(fact(k)*fact(i-k));
			printf("%d ",a);
		}
		printf("\n");
	
	
	}
	return 0;



}
