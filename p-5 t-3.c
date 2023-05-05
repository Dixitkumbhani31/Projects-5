#include<stdio.h>

main()

{
	int arr[]={10,20,30,40,50,60,70,80},k=3,i,temp[k],x=k;
	int n=sizeof(arr)/sizeof(arr[0]);
	
	for(i=0;i<k;i++)
	temp[i]=arr[i];
	
	for(i=0;x<n;i++)
	{
		arr[i]=arr[x++];
	}
	x=0;
	
	for(i=n-k;i<n;i++)
	arr[i]=temp[x++];
	for(i=0;i<n;i++)
	printf("%d,",arr[i]);
}
