#include <stdio.h>


int main()
{
	int n = 100;
	int i = 0;
	int j = 0;
	int arr[100] = {0};

	for(i = 2; i < n; i++)
	{
		arr[i] = 1;
	}

	for(i = 2; i < n; i++)
	{
		for(j = i; j < n; j++)
		{
			if(i*j < n)
			{
				arr[i*j] = 0;
			}
		}
	}

	for(i = 2; i < n; i++)
	{
		if(arr[i] == 1)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}	