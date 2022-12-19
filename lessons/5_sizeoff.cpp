#include <iostream>

int main()
{
    using namespace std;
    
    int x;

    cout << "int: " << sizeof(int) << '\n';
    cout << "int8_t: " << sizeof(int8_t) << '\n'; 
    cout << "bool: " << sizeof(bool) << '\n';
    cout << "double: " << sizeof(double) << '\n';
    cout << "float: " << sizeof(float) << '\n';
    cout << "pointer: " << sizeof(&x) << '\n';

    return 0;
}
