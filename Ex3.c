#include <stdio.h>

int main()
{
	int x,i=2;
	printf("Saisissez un entier: ");
	scanf("%d",&x);

	for(i=2;i>1;i++)
	{
	    if((x%i) == 0)
	    {
	        printf("%d n'est pas premier ",x);
	    }
	    else
	    {
	        printf("%d est premier.", x);
	        break;
	    }
	}

    return(0);
}
