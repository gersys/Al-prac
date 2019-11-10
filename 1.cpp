#include <iostream>

using namespace std;

int main() {
	
	int N, M;

	cin >> N;
	cin >> M;

	cout << N << " " << M << endl;

	int quo;

	quo = N / M;

	cout << "quo: " << quo << endl;
	
	int sum = 0;
	for (int i = 1; i <= quo; i++)
		sum += i * M;

	cout << "sum: " << sum << endl;

}