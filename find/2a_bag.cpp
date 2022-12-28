#include<iostream>

int32_t bag(int32_t [][2], int32_t, int32_t);

int main () {

int32_t n, m, r;

std::cout << "Enter number of items: ";
std::cin >> n;
std::cout << '\n';
std::cout << "Enter size of bag: ";
std::cin >> m;
std::cout << '\n';

int32_t A[n][2];

for (int i = 0; i < n; i++) {
    std::cout << "Enter waight and cost of item [" << i << "]: ";
    std::cin >> A[i][0] >> A[i][1];
    std::cout << '\n';
}

r = bag(A, m + 1, n);

std::cout << "Max waight of bag is " << r << '\n';

}

int32_t bag(int32_t A[][2], int32_t m, int32_t n){
//INIT MEMORY
    //  array buf_W[n][m]
    int32_t** buf_W = new int32_t* [n];
    *buf_W = new int32_t [n * m]; 
    for (int i = 1; i < m; i++){ 
        buf_W[i] = *buf_W + m * i;
    }
    //  array buf_I[n][k][m]
    int k = n;
    bool*** buf_I;
    buf_I =  new bool** [n];
    *buf_I = new bool* [n * k];
    **buf_I = new bool [n * k * n];
    
    for (int i = 0; i < n; i++) {
        buf_I[i] = *buf_I + k * i;
        //std::cout << &buf_I[i] << '\t' << buf_I[i] << '\n';
    }

        std::cout <<  '\n';

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            int s = (m * j) + (m * k * i) ;
            buf_I[i][j] = **buf_I + s;
            //std::cout << &buf_I[i][j] <<'\t' << buf_I[i][j] << '\n';
        }
    }    
    
    for (int i = 0; i < m * k * n; i++) {
        buf_I[0][0][i] = false;
    }
        
//BASE CASE
    for (int i = 1; i < m; i++){ 
        if (i < A[0][0]){
            buf_W[0][i] = 0;
        } else {
            buf_W[0][i] = A[0][1];
            buf_I[0][0][i] = true;
        }
    }
            
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < A[i][0]; j++) {
            buf_W[i][j] = buf_W[i-1][j];
            
            //for(int l = 0; l < n; l++) {
            //    buf_I[l][i][j] = buf_I[l][i - 1][j];
            //}
        }
        for (int j = A[i][0]; j < m; j++) {
            int32_t x = buf_W[i - 1][j];
            int32_t y = buf_W[i - 1][j - A[i][0]] + A[i][1];

            if (x > y) {
                buf_W[i][j] = x;
                for(int l = 0; l < n; l++) {
                    buf_I[l][i][j] = buf_I[l][i - 1][j];
                }
            } else {
                buf_W[i][j] = y;
                for(int l = 0; l < n; l++) {
                    buf_I[l][i][j] = buf_I[l][i - 1][j - A[i][0]];
                }
                buf_I[i][i][j] = true;
            }
        }
        /*
        for (int j = 0; j < n; j++) {
            for (int l = 0; l < m; l++) {
                buf_I[j][0][l] = buf_I[j][1][l];
            }
        }
        */
    }
    
//PRINT MATRIX    
    for (int i = 1; i < m; i++){
        for (int j = 0; j < n; j++) {
            std::cout << buf_W[j][i] << ' '; 
        }
        std::cout << '\n';
    }
        std::cout << "\n";

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < m; j++) {
            for (int l = 0; l < k; l++) {  
                std::cout << buf_I[i][l][j] << ' '; 
            }
            std::cout << '\n'; 
        }
        std::cout << '\n'; 
    }
        
    int result = buf_W[m-1][n-1];
    
    for (int i = 0; i < n; i++) {
        if (buf_I[i][n - 1][m - 1]) {
            std::cout << i << '\t';
        }
    }
        std::cout << '\n'; 

    delete *buf_W;
    delete buf_W;

    delete **buf_I;
    delete *buf_I;
    delete buf_I;
    return result;
}
