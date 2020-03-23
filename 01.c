#include<stdio.h>
int main()
{
	int a[20];
	int pass,hold,i,n=10;
	char t;
	printf("Enter the Number of Gifts Purchased By The 10 Students \n");
	for(t=97,i=0;t<=n,i<n;t++,i++)
	{
		printf("\n %c",t);
		scanf("%d",&a[i]);
		
		
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	for(pass=1;pass<=n-1;pass++)
	{
		for(i=0;i<n-1;i++)
		{
			if(a[i]<a[i+1])
			{
				hold=a[i];
				a[i]=a[i+1];
				a[i+1]=hold;
			}
			
		}
	}
	for(i=0;i<n;i++)
	{
		
		printf("%d \n",a[i]);
	}
	
		
	

}
