#include <stdio.h>
#include <wchar.h>
#include <limits.h>

int main(void)
{
	puts("Character Types");
	puts("-----\t----");
	printf("Char Bytes: %zu\n", sizeof(char));
	printf("Max Value: %d\n", CHAR_MAX);
	printf("Min Value: %d\n", CHAR_MIN);
	puts("-----\t----");
	printf("Signed Char Bytes: %zu\n", sizeof(signed char));
	printf("Max Value: %d\n", SCHAR_MAX);
	printf("Min Value: %d\n", SCHAR_MIN);
	puts("-----\t----");
	printf("Unsigned Char Bytes: %zu\n", sizeof(unsigned char));
	printf("Max Value: %d\n", UCHAR_MAX);
	printf("Min Value: %d\n", 0);
	puts("-----\t----");
	printf("wchar_t Bytes: %zu\n", sizeof(wchar_t));
	printf("Max Value: %d\n", WCHAR_MAX);
	printf("Min Value: %d\n", WCHAR_MIN);
}