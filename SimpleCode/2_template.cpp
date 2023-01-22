#include<iostream>

template <typename T1, typename T2>

T1 Sum(T1 a,T2 b) {
    return a + b;
}

int main () {
    std::cout << Sum(3,5) << std::endl;
}

