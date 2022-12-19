#include <iostream>

void inc(int* a)
{
	*a += 1;
		//std::cout << a << std::endl;
}

int main()
{
	int b = 0;

	for(int i = 0; i < 10; i++)
	{
		inc(&b);
		std::cout << b << std::endl;
	}
	return 0;
}

