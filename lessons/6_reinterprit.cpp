#include <iostream>
#include<bitset>

int main()
{
    using namespace std;

    int64_t y;
    double x;

    cout << "x >";
    cin >> x;

    y = *reinterpret_cast<int64_t*>(&x);

    cout << "y bit: "<< bitset<64>(y) << '\n';
    cout << "y dec: "<< y << '\n';
    return 0;
}
