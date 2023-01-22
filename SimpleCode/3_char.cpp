#include<iostream>

int main () {

//std::cout <<"ы"<< std::endl;

setlocale(LC_ALL, "ru");

for (int i = 0; i < 256; i++) {

    std::cout << i << '\t' << char(i) << std::endl;
}
}
