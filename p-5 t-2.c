#include<stdio.h>
 
main()

{
	int a[1000],i,n,fir,sec;
	
	printf("Enter array size=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
    }
    fir=sec;
	for(i=0;i<n;i++)
	{
		if(a[i]>fir)
		{
		  	sec=fir;
			fir=a[i];
		}
		else if(a[i]<fir && a[i]>sec)
		{
		    sec=a[i];
		}
	}
	printf("\nsecond largest number=%d",sec);
}
