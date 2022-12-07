#include <stdio.h>    
void main ()    
{    
    int a[2][2],b[2][2],i,j; 
	int c[2][2];    
    for (i=0;i<2;i++)    
    {    
        for (j=0;j<2;j++)    
        {    
            printf("[%d][%d]: ",i,j);                
              
        }    
    }    
    printf("\n printing the elements ....\n");     
    for(i=0;i<2;i++)    
    {    
        printf("\n");    
        for (j=0;j<2;j++)    
        {    
            printf("%d\t",a[i][j],b[i][j]);    
        }    
    } 
	printf("..........SUM...........");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
				{
					c[i][j]=a[i][j]+b[i][j];
				}	
		}
		for(i=0;i<2;i++)
		{	
			printf("\n");
			for(j=0;j<2;j++)
				{
					printf("%d\n",c[i][j]);
				}	
		}   
}    
