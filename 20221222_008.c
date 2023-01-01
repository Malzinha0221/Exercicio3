#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

int main()
{
  int n, c1, c2, hip;
  int p;

  printf("Digite o comprimento da hipotenusa: ");
  scanf("%d" , &n);

  for (hip = 1; hip <= n; hip++) 
  {
    p = FALSE;
    for (c1 = 1; c1 < hip && !p; c1++) 
    {
      c2 = c1; 
      while (c1*c1 + c2*c2 < hip*hip)
	c2++;
      if (c1*c1 + c2*c2 == hip*hip)
      {
	printf("hipotenusa = %d, catetos %d e %d\n", hip, c1, c2);
	p = TRUE;
      }
    }
  }

  return 0;
}
