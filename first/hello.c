
#include <stdio.h>

#ifdef DEBUG
int test_copy_array(void);
#endif
void copy_array(int from[], int to[], int sz);


int main()
{
	printf("Hello, World!\n");
	test_copy_array();
	return 0;
}

#ifdef DEBUG
int test_copy_array(void)
{
#define LEN 5
	int x[LEN] = { 1,2,3,4,5 };
	int y[LEN] = { 0 };

	int size = sizeof(y) / sizeof(y[0]);

	copy_array(x, y, LEN);

	for (int i = 0; i < LEN; i++)
	{
		if (x[i] != y[i])
		{
			return -1;
		}
	}

	return 0;
}
#endif

void copy_array(int from[], int to[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		to[i] = from[i];
	}
}