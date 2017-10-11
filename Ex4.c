#include <stdio.h>


int main(void) {
	int i,s,j;
	for (i=1;i<1000;i++)
	{s=0;
		for (j=1;j<=i/2;j++){
		if (i%j ==0)
		{
			s=s+j;
		}
		}
		if (s ==i)
		{
			printf ("%d est parfait",i);
			printf("\n");
		}
	}
}
