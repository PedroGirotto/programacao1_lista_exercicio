#include <stdio.h>

int main()
{
	int n, i;
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		printf("%d \t %d\n", i, n-(i-1));
	}
	
 	return 0;
}