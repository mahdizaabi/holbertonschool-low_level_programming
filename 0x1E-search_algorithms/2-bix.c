#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

int search(int *a, size_t l, size_t r, int v)
{
	size_t x;
	if(l <= r)
	{
		size_t m = l + (r - l) / 2; 
		if (a[m] == v)
			return(m);
		if (v > a[m])
		{
			if (l != r)
				printf("Se+rching in array: ");
			for(x = m + 1; x <= r; x++)
			{
				printf("%d", a[x]);
				if (x != r)
					printf(", ");
			}
			if (l != r)
				printf("\n");
			return(search(a, m + 1, r, v));
		}
		if (v < a[m])
		{
			if (l != r)
				printf("Shg in array: ");
			for(x = l; x < m; x++)
			{
				printf("%d", a[x]);
				if (x != m -1)
					printf(", ");
			}
			if (l != r)
				printf("\n");
			return(search(a, l, m - 1, v));
		}
	}
	return(-1);
}


int binary_search(int *array, size_t size, int value)
{
	size_t x;

	if (!size || !array)
		return (-1);
	 printf("Searching in array: ");
         for(x = 0; x < size; x++)
         {
         	printf("%d", array[x]);
		if (x != size - 1)
			printf(", ");
         }
         printf("\n");
	return(search(array, 0, size - 1, value));
}
