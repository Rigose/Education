#include <iostream>

int main (){
    int a = 5;
    int b = 7;

    std::cout << "a:\t" << &a << "\nb:\t" << &b << std::endl;
    
    a = b;

    std::cout << "a:\t" << &a << "\nb:\t" << &b << std::endl;
    

    std::cout << "Привет" << std::endl;
    return 0;
}
