#include<iostream>

using namespace std;
int64_t factorial (int);

int main () {
    int x;

    cout << '>';
    cin >> x;

    cout << factorial(x) << '\n';

    return 0;
}

int64_t factorial(int n){
    if (n < 2) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
