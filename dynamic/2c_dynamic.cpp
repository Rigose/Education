#include<iostream>

using namespace std;

int** createarray(int, int);
void fillarray(int**, int);
void printarray(int**, int, int);

int main ()
{
    int N;  //lines
    int M;  //rows

    cout << '>';
    cin >> N;
    cout << '>';
    cin >> M;
    cout << '\n';

    int** A = createarray(N, M);
    fillarray(A, N * M);
    printarray(A, N, M);
    return 0;
}

int** createarray(int N, int M) {
    int** A = new int* [N]; //pointers to lines
    *A = new int[N * M];    //array
    for (int i = 0; i < N; i++){
        A[i] = *A + i * M;
    }
    return A;
}

void fillarray(int** A, int n) {
    for(int i = 0; i < n; i++) {
        (*A)[i] = i;
    }
}

void printarray(int** A, int N, int M) {
    for (int j = 0; j < N; j++) {
       for (int i = 0; i < M; i++) {
            cout << (*A)[j*M + i] << '\t';
        }
        cout << '\n';
    }
}
