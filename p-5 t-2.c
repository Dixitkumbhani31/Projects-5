#include<stdio.h>

main()

{
	int a[100],i,j,n,temp;
	
	printf("Enter Array size=");
	scanf("%d",&n);
	
	printf("Enter Value=");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
