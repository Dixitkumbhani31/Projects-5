#include<stdio.h>

main()
 
{
    int r,c,i,j,a[100][100],sum=0;
	 
	printf("Enter row size=");
    scanf("%d",&r);
    printf("Enter column size=");
    scanf("%d",&c);
    printf("\nEnter matrix elements=\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
	        printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            if(i==j)
		    {
			    sum=sum+a[i][j];
            }
        }
    }  
	printf("\nThe matrix is=\n");
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    {
	        printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
    printf("\nSum diagonal elements of matrix=%d",sum);
}
