#include<iostream>
#include<string>

class Point {

public:
    int x;
    int y;
    int z;
private:
protected:
};

class Human {

public:
    int age = 18;
    std::string name = "NoName";

    void Print() {
        std::cout << "Name:\t " << name << '\n' << "Age:\t " << age << std::endl; 
    }
};

int main() {
    Human firstHuman;
    //firstHuman.age = 30;
    firstHuman.name = "Sergey";


    firstHuman.Print();
    //std::cout << firstHuman.age << std::endl;
    //std::cout << firstHuman.name << std::endl;

    return 0;
}
