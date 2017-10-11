#include <stdio.h>

int main()
{
	int a,b,r,PGCD;
		printf("Saisissez un entier: ");
		scanf("%d",&a);
		printf("Saisissez un entier: ");
		scanf("%d",&b);
    while (a>b)
    {
    	r=a%b;
    	if (r == 0)
    	{
    		PGCD=b;break;
    	}
    	else
    	{
    		a=b;
    		b=r;
    	}
    }
	printf("Le PGCD de %d et %d = %d",a,b,PGCD);
	return 0;
}
