#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{		
	int v4, v5, v6;
	printf("Entre com a data (ddmmyyyy)\n");
	scanf("%d", &v4);
	v6 = v4 % 10000;
	v5 = v4 % 10000 / 100 + 1;
	printf("\nSeculo %d\n", v5);
	system("pause");
	return 0;
}
