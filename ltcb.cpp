#include <iostream>
using namespace std;
int main() {
	int sonhap;
	cout << "nhapso:"; cin >> sonhap;
	for (int n = 1; n <= 10; n++) {
		cout << sonhap << "x" << n << "=" << sonhap * n << endl;
	}
	return 0;
}