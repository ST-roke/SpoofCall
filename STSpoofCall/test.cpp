#include <iostream>
#include "spoofcall.h"
using namespace std;

void test(int a, int b, int c, int d)
{
	printf("Hello World!\n");
	printf("a: %d, b: %d\n", a, b);
	printf("c: %d, d: %d\n", c, d);
}

int main()
{
	using namespace ST;
	Spoof::Call(&test, 1, 2, 3, 4);
	return 0;
}
