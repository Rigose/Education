#include<iostream>

using namespace std;

void printarr(int[], int);
double cltime(time_t);

int main() {
    time_t start;
    int n,f;

    cout << "A n>";
    cin >> n;
    cout << '\n';

    int A[n];

    for (int i = 0; i < n; i++) {
        A[i] = i;
    }
    
    printarr(A, n);

    cout << "find>";
    cin >> f;
    cout << '\n';
    
    start = clock();
    for (int i = 0; i < n; i++) {
        if (A[i] == f) {
            cout << i << '\n';
            break;
        }
    }
    
    cout << cltime(start) << '\n';

    return 0;
}
void printarr(int A[], int n) {
    for (int i = 0; i < n; i++){
        cout << A[i] << '\t';
    }
        cout << '\n';
}

double cltime(time_t start) {
    return double(clock() - start) / CLOCKS_PER_SEC;
}


