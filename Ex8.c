#include <stdio.h>


int main()
{
	int r,p,a,b;
	printf("Ecrire un entier en base décimale: ");
	scanf("%d",&a);
	printf("Ecrire un entier en base décimale: ");
	scanf("%d",&b);
	do
	{
		p=p/2;
		r=a%2;
		printf("%d",r);
	}while (p==0);
	printf("\n");
	do
	{
		p=p/2;
		r=b%2;
		printf("%d",r);
	}while (p==0);
	return 0;
}
