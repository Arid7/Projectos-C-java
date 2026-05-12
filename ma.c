#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{		
	int i,n;
	float nota;
	printf("Entre com a sentinela: ");
	scanf("%d",&n);
	for(i=0;i<n;i=i+1)
	{
		printf("\nEntre com a nota: ");
		scanf("%f",&nota);
		printf("\nnota =%2.f\n",nota);
	}
		
		
	return 0;
}
