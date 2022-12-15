#include<iostream>

int main()
{
    using namespace std;

    int x;
    int s = 0;

    while(1) {

        cout << ">";
        cin >> x;

        if (x == 0){
            break;
        }
        else if (x % 2 == 0) {
            s++;
        }
    }

    cout << s << '\n';
    return 0;
}

