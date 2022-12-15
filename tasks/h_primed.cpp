#include<iostream>
#include<cmath>

int main(){
    
    using namespace std;
    int x;
    int c = 2;

    cout << '>';
    cin >> x;
    
    while (sqrt(x) > c){
        if (x % c == 0) {
            cout << c;
            x /= c;
            c = 2;
            cout << '-' << x << '\n';
        }
        else {
            c++;
        }            
    }

    cout << x << '-' << x << '\n';
    return 0;
}
