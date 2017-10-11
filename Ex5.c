#include <stdio.h>

int main()
{
    int i,j,l,h;
	printf("Saisissez un entier: ");
	scanf("%d",&l);
    printf("Saisissez un entier: ");
	scanf("%d",&h);

    for (i=1;i<=h;i++)
    {
        for (j=1;j<=l;j++)
        {
        	printf("*");
        }
        printf("\n");
    }


    return(0);
}
