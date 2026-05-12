#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	 int a,b,c;
  printf("Entre com 3 inteiros diferentes\n");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
         if(a>c)
         printf("Maior valor=%d",a);
         else
         printf("Maior valor=%d",c);
  else
      if(b>c)
      printf("Maior valor=%d",b);
      else
      printf("Maior valor=%d",c);
  
	return 0;
}
