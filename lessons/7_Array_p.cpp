#include<iostream>

int main()
{
    using namespace std;

    int A[10], x = 0;
    int* p;

    p = A;

    for (int i = 0; i < 10; i++)
    {
        *(p + i) = i;
        cout << A[i] << '\n';
    }
    
    return 0;
}

