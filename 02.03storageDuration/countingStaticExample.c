#include <stdio.h>

void increment(void);

int main(void)
{
	for (int i; i < 5; i++)
		increment();
	puts("");
	return 0;
}

void increment(void)
{
	static unsigned int counter = 0;
	counter++;
	printf("%d ", counter);
}