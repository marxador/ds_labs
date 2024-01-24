#include <iostream>

void compute_squares(unsigned int a[], unsigned int b[], unsigned int n)
{
	unsigned int *p;
	unsigned int *q;
	p = a;
	q = b;
	for (int i = 0; i < n; ++i)
	{
		*(q + i) = (*(p + i)) * (*(p + i));
	}
}

int main(int argc, char const *argv[])
{
	unsigned int a[5] = {1,2,3,4,5};
	unsigned int b[5];
	unsigned int n = 5;
	compute_squares(a, b, n);

	for (int i = 0; i < n; ++i)
	{
		std::cout << b[i] << std::endl;
	}

	return 0;
}