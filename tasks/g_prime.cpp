#include<iostream>
#include<cmath>

int main(){
    
    using namespace std;
    int x;
    int c = 2;

    cout << '>';
    cin >> x;
    
    while (1){
        
        if (sqrt(x) < c) {
            cout << 1 << '\n';
            break;
        }
        else if (x % c == 0) {
            cout << 0 << '\n';
            break;
        }

        c++;
                
        //cout << sqrt(x) << '\n';
        //cout << c << '\n';
    }

    return 0;
}
