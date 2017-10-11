#include <stdio.h>

int main()
{
	int f,i,r;
	printf("Saisissez un entier: ");
	scanf("%d",&f);
	r=f;
	for (i=f-1;i>1;i--)
		{
		   r=r*i;
		}
	printf("La factorielle de %d = %d",f,r);
	return 0;
}
