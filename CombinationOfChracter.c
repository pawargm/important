#include<stdio.h>
int main()
{
	
	int i;
	int n;
	char arr[1000];
	printf("Enter Size\n");
	scanf("%d",&n);
	
	//for(i=0;i<n;i++)
	scanf("%s",arr);
	
	/*for(i=0;i<n;i++)
	printf("%c",arr[i]);
	*/
	int j,k,l;
	char tmp;
	for(j=0;j<n;j++)
	{
		for(k=0;k<n-1;k++)
		{
			tmp=arr[k];
			
			arr[k]=arr[k+1];
			
			arr[k+1]=tmp;
			
			for(l=0;l<n;l++)
			printf("%c",arr[l]);
			printf("\n");
		
		}
	}
	
	return 0;


}
