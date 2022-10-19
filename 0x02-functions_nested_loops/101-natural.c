#include <stdio.h>

/**
 *main - Lists all the natural numbers below 1024 (excluded)
 *that are multiples of 3 or 5.
 *Return: Always 0.
 */

int main(void)

{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}


  2  
0x02-functions_nested_loops/main.h
@@ -27,4 +27,6 @@ void print_to_98(int n);

void print_times_table(int n);

int main(void) 

#endif
