#include <iostream>

int main()
{
	int x,y;
	
	std::cout << "x> "; 
	std::cin >> x;

	std::cout << "y> "; 
	std::cin >> y;

	while (1)
	{
		if (x > y)
		{
			x %= y;
			if (x == 0)
			{
				std::cout << "NOD:" << y << std::endl;		
				break;
			}
		}
		else
		{
			y %= x;
			if (y == 0)
			{
				std::cout << "NOD:" << x << std::endl;
				break;
			}
		}
		//std::cout << "x:" << x << std::endl;
		//std::cout << "y:" << y << std::endl;

	}
	
	return 0;
}

