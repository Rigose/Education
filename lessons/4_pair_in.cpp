#include <iostream>

struct Pair
{
    int a;
    int b;
};

int sum(Pair);

int main()
{
    Pair x;
    int y;

    std::cout << "x> ";
    std::cin >> x.a;
    std::cout << "y> ";
    std::cin >> x.b;
    
    y = sum(x);

    std::cout << "Sum: " << y << std::endl;
}

int sum(Pair z)
{
    return (z.a + z.b);
}
