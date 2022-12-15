#include<iostream>

using namespace std;

void printarr(int[], int);
double cltime(time_t);

int main()
{    
    time_t start = clock();
    int n,t;
    
    cout << '>';
    cin >> n;
    cout << '\n';

    int A[n];

    for (int i = 0; i < n; i++) {
        A[i] = rand() % n;//n - i;
    }
 
    printarr(A, n);
        
    for (int i = 1; i < n; i++) { 
        t = A[i];
        int k = i - 1;
        while(t < A[k] && k >= 0) {    
            A[k + 1] = A[k];
            k--;
        }
        A[k + 1] = t;
    }
    
    printarr(A, n);

    cout << cltime(start) << 's' << '\n';

    return 0;
}

void printarr(int A[], int n) {
    for (int i = 0; i < n; i++){
        cout << A[i] << '\t';
    }
        cout << '\n' << '\n';
}

double cltime(time_t start) {
    return double(clock() - start) / CLOCKS_PER_SEC;
}
