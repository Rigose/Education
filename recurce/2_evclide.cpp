#include<iostream>

using namespace std;
int nod (int, int);

int main () {
    int a, b;

    cout << '>';
    cin >> a;
    cout << '>';
    cin >> b;
    
    cout << nod(a, b) << '\n';

    return 0;
}

int nod(int a, int b){
    if (b == 0) {
        return a;
    } else {
        return nod(b, a % b);
    }
}
