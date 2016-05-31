/*
 ============================================================================
 Name        : spiral.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include "spihead.h"

/**
 * @file
 * @author  Sayali Mahadik <sayali.mahadik2613@gmail.com>
 * @version 1.0
 *
 * @section LICENSE
 *
 * This program defines the function to write elements of matrix in reverse spiral order.
 *
 * GIPEDI 2016 Batch 2
 * @section DESCRIPTION
 *
 * The function RevSpiral represents the reverse spiral function.
 */
void RevSpiral(int n,int a[n][n])
{
int t,b,l,r,dir;
t=0;
b=n-1;
l=0;
r=n-1;
dir=0;
int i,j;
int x[n];
int k=0;

while(t<=b && l<=r)
{
 if(dir==0)
	{
		for(i=l;i<=r;i++)
		{
			x[k]=a[t][i];
			//printf("%d ", a[t][i]);
k++;
		}
		t++;
		//dir=1;
	}

else if(dir==1)
	{
		for(i=t;i<=b;i++)
{
		//printf("%d ", a[i][r]);
		x[k]=a[i][r];
k++;
}
	 r--;
	 //dir=2;

	}


else if(dir==2)
{
	for(i=r;i>=l;i--)
	{
		//printf("%d ",a[b][i]);

		x[k]=a[b][i];
k++;
	}
        b--;
	//dir=3;
}

else if(dir==3)
{
	for(i=b;i>=t;i--)



		{
			//printf("%d ",a[i][l] );

			x[k]=a[i][l];
k++;
		}

						l++;
						//dir=0;

}

dir=(dir+1)%4;


}
printf("\n\nthe reversed spiral order of matrix");
for(i=n*n;i>=0;i--)
{
printf("%d ",x[i]);
}
}
