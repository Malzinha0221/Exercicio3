#include <stdio.h>

int main() 
{
  int x, y, m, n, v, xmax, ymax, vmax;   

    printf("Digite m: ");
    scanf ("%d", &m);
    printf("Digite n: ");
    scanf ("%d", &n);

  xmax = ymax = 0;
  vmax = 0;  
  for (x = 0; x <= m; x++) 
    {
      for (y = 0; y <= n; y++) 
	{
          v = x*y - x*x + y;
          if (v > vmax)
	    {
              vmax = v;
              xmax = x;
              ymax = y;
	    }
	}  
    }

  printf("Valor maximo = %d com x = %d e y = %d\n", vmax, xmax, ymax);

  return 0;
} 
