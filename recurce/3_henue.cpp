#include<iostream>

using namespace std;
void hanoi (int, int, int);

int main () {
    int i=1, k=2, n;

    cout << '>';
    cin >> n;

    hanoi (i, k, n);

    return 0;
}

void hanoi (int i, int k, int n){
    if (n == 1) {
        cout << "disk 1 " << i << " to " << k << '\n';
    } else {
        int tmp = 6 - i - k;
        hanoi (i, tmp, n - 1);
        cout << "disk " << n << ' ' << i << " to " << k << '\n';
        hanoi (tmp, k, n - 1);
    }
}
