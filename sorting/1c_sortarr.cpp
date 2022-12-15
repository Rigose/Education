#include<iostream>

using namespace std;

void printarr(int[], int);
double cltime(time_t);

int main()
{    
    time_t start = clock();
    int n;
    
    cout << '>';
    cin >> n;

    int A[n];

    for (int i = 0; i < n; i++) {
        A[i] = n - i;
    }
 
    //printarr(A, n);
        
    for (int i = 0; i < n - 1; i++) {
            int t = i;
        for (int j = i + 1; j < n; j++) {
            if (A[t] > A[j]) {
                t = j;
            }
        }
        int tmp = A[i];
        A[i] = A[t];
        A[t] = tmp;
    }
    
    //printarr(A, n);

    cout << cltime(start) << 's' << '\n';

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
