#include<iostream>

using namespace std;

void printarr(int[], int);
double cltime(time_t);
void sort_1(int[], int);
void sort_2(int[], int);
void sort_3(int[], int);
void sort_4(int[], int);
void copyarr(int[], int[], int);

int main()
{    
    time_t start;
    int n,t;
    
    cout << '>';
    cin >> n;
    cout << '\n';

    int A[n],B[n];

    for (int i = 0; i < n; i++) {
        A[i] = rand() % n;//n - i;
    }

    //printarr(A, n);
    cout << '\n';    
    //---------------------------------------------------------- 
    //copyarr(A, B, n);
    //start = clock();
    //sort_1(B, n);
    //printarr(B, n);
    //cout << cltime(start) << 's' << '\n' << '\n';
    //---------------------------------------------------------- 
    copyarr(A, B, n);
    start = clock();
    sort_2(B, n);
    //printarr(B, n);
    cout << cltime(start) << 's' << '\n' << '\n';
    //---------------------------------------------------------- 
    copyarr(A, B, n);
    start = clock();
    sort_3(B, n);
    //printarr(B, n);
    cout << cltime(start) << 's' << '\n' << '\n';
    //---------------------------------------------------------- 
    copyarr(A, B, n);
    start = clock();
    sort_4(B, n);
    //printarr(B, n);
    cout << cltime(start) << 's' << '\n' << '\n';

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

void sort_1(int A[], int n) {
    int i = 0; 
    while (i < n - 1){
        if (A[i] > A[i + 1]){
            int t = A[i];
            A[i] = A [i + 1];
            A[i + 1] = t;
            i = 0;
        }else{
            i++;
        }
    }
}
void sort_2(int A[], int n) {
    int i = 0;
    while (i < n - 1){
        if (A[i] > A[i + 1]){
            int t = A[i];
            A[i] = A [i + 1];
            A[i + 1] = t;
            (i == 0) ? i++ : i--;
        }else{
            i++;
        }
    }
} 
void sort_3(int A[], int n) {
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
} 
void sort_4(int A[], int n) {
    for (int i = 1; i < n; i++) { 
        
        int t = A[i];
        int k = i - 1;
        
        while(t < A[k] && k >= 0) {    
            A[k + 1] = A[k];
            k--;
        }
        A[k + 1] = t;
    }
}
void copyarr(int A[], int B[], int n) {
    for (int i = 0; i < n; i++) {
        B[i] = A[i];
    }
}

