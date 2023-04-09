#include <stdio.h>
#include <limits.h>

int main(void)
{
	puts("Integer Type");
	puts("-----\t----");
	printf("Short Int Bytes: %zu\n", sizeof(short));
	printf("Max Value: %d\n", SHRT_MAX);
	printf("Min Value: %d\n", SHRT_MIN);
	puts("-----\t----");
	printf("Int Bytes: %zu\n", sizeof(int));
	printf("Max Value: %d\n", INT_MAX);
	printf("Min Value: %d\n", INT_MIN);
	puts("-----\t----");
	printf("Long Int Bytes: %zu\n", sizeof(long));
	printf("Max Value: %ld\n", LONG_MAX);
	printf("Min Value: %ld\n", LONG_MIN);
	puts("-----\t----");
	printf("Long Long Int Bytes: %zu\n", sizeof(long long));
	printf("Max Value: %lld\n", LLONG_MAX);
	printf("Min Value: %lld\n", LLONG_MIN);
	
	//"Enumeration Types"
	enum day {sun = 0, mon, tue, wed, thu, fri, sat};
	enum cardinals_points {north = 0, east = 90, south = 180, west = 270};
	enum months { jan = 1, fev, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};

	
	
	
}