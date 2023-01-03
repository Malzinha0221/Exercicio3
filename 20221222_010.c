#include <stdio.h>
 
int main() {
	int n;
	int i, j;
	int impar = 1;
	printf ("Totasl de numeros na sequencia: ");
	scanf("%d", &n);
	for (i=1; i<=n; i++) {
		printf("%d^3: %d = ", i, (i*i*i));
		for (j=0; j<i; j++){
			if(j){ // if (j != 0)
			printf("+ ");
			}
			printf ("%d ", impar);
			impar += 2;
		}
		printf("\n");
    }
	return 0;
}
