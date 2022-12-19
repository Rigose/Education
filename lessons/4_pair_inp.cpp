#include <iostream>

struct Pair
{
    int a;
    int b;
};

void sum(Pair*);

int main()
{
    Pair x;
    
    std::cout << "x> ";
    std::cin >> x.a;
    std::cout << "y> ";
    std::cin >> x.b;
    
    sum(&x);

    std::cout << "Sum: " << x.a << "-" << x.b << std::endl;
}

void sum(Pair *z)
{
    z->a += z->b;  
    z->b = 0;
}
