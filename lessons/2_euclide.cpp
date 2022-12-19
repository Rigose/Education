#include <iostream>

int euclid_gcd(int a, int b)
{
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return a;
}

int main()
{
	using namespace std;
	int x, y;

	cout << "Enter intager. x = ";
	cin >> x;

	cout << "Enter intager. y = "; 
	cin >> y;

	cout << "GCD(x,y) = " << euclid_gcd(x,y) << endl;
	
	return 0;
}

