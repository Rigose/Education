#include<iostream>

void gen(int* , int*);

int main() {
    int n;
    int i = 0;

    std::cout << '>';
    std::cin >> n;

    int buff[n];

    gen(&i,&n);
    return 0;
}

void gen(int* i, int* n) {
    if (*i != *n) {
        std::cout << '0' << ' ';
        (*i)++;
        gen(i, n);
        std::cout << '1' << ' ';
    } else {
        std::cout << '\n';
    }
}

