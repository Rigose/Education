#include<iostream>
#include<ctime>

int main(){
    using namespace std;

    int x;
    int i;
    int n = 1000;
    int A[n];
        
    clock_t start = clock();   
      
    for (i = 0; i < n; i++){
        A[i] = n - i;
    }
   
    i = 0;
   
    while(i < n - 1) {
        if (A[i] > A[i + 1]){
            int tmp = A[i];
            A[i] = A[i + 1];
            A[i + 1] = tmp;
            i = 0;
        }else{
            i++;
        }
        //cout << i << '\n';
    }
    /*
    for (i = 0; i < n; i++) {
        cout << A[i] << '\n';
    }
    */
    clock_t end = clock();
    double d = double(end - start) / CLOCKS_PER_SEC;
    cout << d  << '\n';   
 
    return 0; 
}
