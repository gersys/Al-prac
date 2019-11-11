#include <iostream>

using namespace std;

int main() {
	int N;

	cin >> N;

	int sum = 1;
	cout << "1";
	for (int i = N-1; i > 1; i--)
		if (N % i == 0) {
			sum += (N / i);
			cout << " + " << (N/i);
		}

	cout << " = " << sum;



}