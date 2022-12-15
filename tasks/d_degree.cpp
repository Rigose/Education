#include <iostream>

int main()
{
    using namespace std;

    int x;
    cout << ">";
    cin >> x;

    while(1){
        if (x % 2){
            cout << "NO" << '\n';
            break;
        }
        else {
            if (x == 2){ 
                cout << "YES" << '\n';
                break;
            }
            else
                x /= 2;
        //cout << x << '\n';
        }
    }
    return 0;
}
