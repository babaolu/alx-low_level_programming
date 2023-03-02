#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write you line of code here...
	 * Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 * - you are not allowed to code anything else than this line of code
	 */

	a[0] = 21;
	n = 10;
	p[9] = 54;
	while (n)
	{
		printf("%d %p\n", (int) p[10 - n], (void *) (p + (10 - n)));
		printf("%d %p\n_________\n", (int) p[n], (void *) (p + n));
		n--;
	}
	printf("%p\n%p\n", (void *) &n, (void *) a);
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
