#include <stdio.h>

int j;				// file scope of j begins

void f(int);
void g(int);

int main(void)
{
	//int j;						// file/block? scope of j begins
	
	f(j);
	printf("\nmain j:%d\n", j);		//file scope of j return
	
	g(j);
	printf("\nmain j: %d\n", j);	//file scope of j return
	
	return 0;
}

void f(int i)	// block scope of i begins
{
	int j = 1;	// block scope of j begins; hides file-scope j
	
	i++;		// i refers to the function parameter
	
	puts("For Loop:");
	for (int i; i < 3; i++)	// block scope of loop-local i begins
		{
			int j = 2;		// block scope of the inner j begin; hides outer j
			printf("j: %d\n", j);	// inner j is in scope, prints 2
			printf("i: %d\n", i);	// loop-local i is in scope, prints 0, 1, 2
			puts("");
		}		// block scope of the inner i and j ends

	puts("Function F");
	printf("j: %d\n", j);	// "function" j is in scope, prints 1
	printf("i: %d\n", i);	// "function" i is in scope, prints 1
}

void g(int j)	// j has function prototype scope; hides file-scope j
{
	j += 5;
	printf("\ng(j): %d\n", j);
}