#include<iostream>
#include<climits>

int main()
{
    using namespace std;
    int x = INT_MIN;
    int m = INT_MIN;
    int c = 0;

    while (x != 0){
    
    cout << '>';
    cin >> x;

        if (x > m) {
            m = x;
            c++;
        }
    }
    cout << "max count :" << c << '\n';    
}
