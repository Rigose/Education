#include <iostream>

struct t_Pair
{
    int a;
    int b;
};

t_Pair calc();

int main()
{
   t_Pair x = calc();
    
    std::cout << x.a << std::endl << x.b << std::endl;

	return 0;
}

t_Pair calc()
{
    t_Pair result;
    result.a = 5;
    result.b = 10;
    return result;        
}



