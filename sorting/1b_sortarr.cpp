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
 
    int i = 0;
    while (i < n - 1){
        if (A[i] > A[i + 1]){
            int t = A[i];
            A[i] = A [i + 1];
            A[i + 1] = t;
            i--;
        }else{
            i++;
        }
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

