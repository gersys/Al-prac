#include <iostream>

using namespace std;

int main() {

	int A, B;

	cin >> A >> B;

	int sum = 0;
	for (int i = A; i <= B; i++) {
		sum = sum + i;
		if (i == B) {
			cout << i << " = ";
			break;
		}
		cout << i << " +";
		
	}

	cout << sum;

	return 0;
}