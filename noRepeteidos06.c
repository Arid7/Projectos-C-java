#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
void noRepetidos(char v[])
{
	int i, j, k;
	for(i=0;v[i]!='\0';i++)
		for(j=0;v[j]!='\0';j++)
			if(i!=j)
				if(v[i]==v[j])
				{
					for(k=j;v[k]!='\0';k++)
						v[k]=v[k+1];
					v[k]='\0';
				}			
}
*/

void noRepetidos(char v[])
{
	int i, j, k;
	for(i=0;v[i]!='\0';i++)
		for(j=i+1;v[j]!='\0';)
			if(v[i]==v[j])
			{
				for(k=j;v[k]!='\0';k++)
					v[k]=v[k+1];
				v[k]='\0';
			}else
				j++;
}

void noRepetidos3(char v[])
{
	int i=0, j, k;
	while(v[i]!='\0')
	{
		j=i+1;
		while(v[j]!='\0')
		{
			if(v[i]==v[j])
			{
				k=j;
				while(v[k]!='\0')
				{
					v[k]=v[k+1];
					k++;
				}
				v[k]='\0';
			}else
				j++;
		}
		i++;
	}	
}

void noRepetidos2(char v[])
{
	int i, j, k;
	for(i=0;v[i]!='\0';i++)
		for(j=i+1;v[j]!='\0';j++)
			if(v[i]==v[j])
			{
				for(k=j;v[k]!='\0';k++)
					v[k]=v[k+1];
				v[k]='\0';
			}			
}

int main() {
	
	char nome[]="BANANA";
	
	noRepetidos3(nome);
	
	printf("Nome eh:%s",nome);
	
	return 0;
}
