#include<iostream>

struct list_t{
    int d;
    list_t *n;
};

void fill_list(list_t**);
void get_list(list_t**);

int main (){
    using namespace std;
    list_t *s, *m;
    s = new list_t;
    m = s;
   
    while (m != nullptr){
        fill_list(&m);
    }
    
    m = s;
    while (m != nullptr){
        get_list(&m);
    }
    
    return 0;
}

void fill_list(list_t** m){
    using namespace std;
    int x;

    cout << '>';
    cin >> x;

    if (x == 0) {
        *m = nullptr;
    }else{
        (*m)->d = x;
        *m = (*m)->n = new list_t;
    }
}

void get_list(list_t** m){
    std::cout << (*m)->d << '\n';
    *m = (*m)->n;
}


