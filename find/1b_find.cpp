#include<iostream>

using namespace std;

void printarr(int[], int);
double cltime(time_t);

int main() {
    time_t start;
    int n, f, t;

    cout << "A n>";
    cin >> n;
    cout << '\n';

    int A[n];
    int b = 0; 
    int e = n;

    for (int i = 0; i < n; i++) {
        A[i] = i;
    }
    
    printarr(A, n);

    cout << "find>";
    cin >> f;
    cout << '\n';
    
    start = clock();
  
    while (1) {
        t = (b + e) / 2; 
        if (A[t] > f) {
            e = t;
        }else if(A[t] < f){
            b = t;
        }else {
            cout << "fpos :" << t << '\n';
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


