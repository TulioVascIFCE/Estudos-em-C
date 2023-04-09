#include <stdio.h>

//First Attempt
/*
void swap(int, int);
*/

//Second Attempt
///*
void swap(int *, int *);
//*/

int main(void)
{
	int a = 10;
	int b = 0;

	//swap(a, b);
	swap(&a, &b);
	printf("main: a = %d, b = %d\n", a, b);
	
	return 0;
}
 //First Attempt
/*
void swap(int a, int b)
{
	int t = a;
	
	a = b;
	b = t;
	
	printf("swap: a = %d, b = %d\n", a, b);
}
*/

//Second Attempt
///*
void swap(int *pa, int *pb)
{
	int t = *pa;
	
	*pa = *pb;
	*pb = t;
}
//*/