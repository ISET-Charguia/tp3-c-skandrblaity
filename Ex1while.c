#include <stdio.h>

int main()
{
	int f,i,r;
	printf("Saisissez un entier: ");
	scanf("%d",&f);
	i=f;
	r=f;
	while (i>1)
		{
		   i=i-1;
		   r=r*i;
		}
	printf("La factorielle de %d = %d",f,r);
	return 0;
}
