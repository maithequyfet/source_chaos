#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	printf("n = ");
	scanf("%d",&n);
	printf("\n");
	int *arr = (int*)malloc(sizeof(int)*n);

	for(i = 2; i < n; i++)
	{
		*(arr + i) = 1;
	}

	for(i = 2; i < n; i++)
	{
		for(j = i; j < n; j++)
		{
			if(i*j < n)
			{
				*(arr + i*j) = 0;
			}
		}
	}

	for(i = 2; i < n; i++)
	{
		if(*(arr + i) == 1)
		{
			printf("%d\n", i);
		}
	}

	free(arr);

	return 0;
}	