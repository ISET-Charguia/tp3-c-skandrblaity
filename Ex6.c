#include <stdio.h>


int main()
{
	int h,i,j,k,l,c;
	printf("Hauteur= ");
	scanf ("%d",&h);
	k=1;
	c=h;
	for (i=1;i<=h;i++)
	{

		for(l=1;l<=c-1;l++)
		{
			printf(" ");
		}

		for(j=1;j<=k;j++)
		{

			printf("*");
		}

		c--;
		k=k+2;
		printf("\n");
	}

}
