#include <iostream>
using namespace std;
int main () 
{
	int  n;
	cin >> n;
	int a[n];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n - 1; i++) {
		for (int i = 1; i <= n - 1; i++) {
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
