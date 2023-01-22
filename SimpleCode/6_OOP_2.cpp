#include<iostream>
#include<string>

class Human{
public:

    Human () {
        this->name = "";
        this->age = 0;
        this->weight = 0;
    }
    
    Human (std::string name) {
        this->name = name;
        this->age = 0;
        this->weight = 0;
    }

    Human (std::string name, int age, int weight) {
        this->name = name;
        this->age = age;
        this->weight = weight;
    }
//-------------------------------------------------------- 
    Human (const Human& other){
        Copy(other);
    }
    
    Human& operator = (const Human& other) {
        Copy(other);
        return *this;
    }
//--------------------------------------------------------
    bool operator == (const Human& other) {
        return Comparison(other);
    }
    
    bool operator != (const Human& other) {
        return !Comparison(other);
    }

    Human operator + (const Human& other) {
        Human t(this->name + ' ' + other.name, this->age + other.age, this->weight + other.weight);
        return t;
    }

    char& operator[] (int index) {
        return this->name[index];
    }

    Human& operator ++ () {
        this->weight++;
        return *this;
    }
    
    Human operator ++ (int value) {
        Human t(*this);
        this->weight++;
        return t;
    }
//-------------------------------------------------
    ~Human () {
        //this->PrintData();
    }
    
    void Copy(const Human &other) {
        this->name = other.name;
        this->age = other.age;
        this->weight = other.weight;
    }

    bool Comparison(const Human& other) {
        return this->name == other.name;
    }

    void SetAge(int valueAge) {
        age = valueAge;
    }

    int GetAge() {
        return age;
    }

    void PrintData() {
        std::cout << "Name:\t" << name << std::endl;
        std::cout << "Age:\t" << age << " years" << std::endl;
        std::cout << "Weight:\t" << weight << " kg" << std::endl;
        std::cout << "addres:\t" << this << std::endl;
        std::cout << std::endl;

    }
private:
    std::string name;
    int age;
    int weight;

};


int main () {
    Human a("Sergey",32,80);
    Human b("Yana",28,46);
    Human c(a);
    //c = a + b;
    
    a.PrintData();
    b.PrintData();
    c = a++;
    c.PrintData();
    a.PrintData();
    
    std::cout<< a[1] << std::endl;
}

