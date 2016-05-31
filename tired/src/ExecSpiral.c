#include <stdio.h>
#include"spihead.h"
void main()
{
int n;
printf("Enter the value of for a nxn matrix");
scanf("%d",&n);

int a[n][n];

printf("\nenter the elements in a matrix");
int i=0,j=0;

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
{
 scanf("%d",&a[i][j]);
}
}

RevSpiral(n,a);

}
