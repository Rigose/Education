#include<iostream>

int main()
{
    using namespace std;

    int N, M;

    cout << '>';
    cin >> N;
    cout << '>';
    cin >> M;
    cout << '\n';
    //  Initialization memory
    //------------------------------------------
    int **A = new int *[N];
    *A = new int [M * N];
    for (int i = 0; i < N; i++) {
        A[i] = *A + M * i;
    }
    //  Fill data
    //------------------------------------------
    for (int i = 0; i < N * M; i++) {
        (*A)[i] = i;
        //cout << i << '\n';
    }
    //  Print data
    //------------------------------------------
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            cout << A[i][j] << '\t';
        }
        cout << '\n';    
    }

   return 0;
}

