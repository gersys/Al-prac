#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int reverse(int x) {
	int res = 0;
	int tmp;
	while (x > 0) {
		tmp = x % 10;
		res = res * 10 + tmp;
		x = x / 10;
	}
	return res;
}

bool isPrime(int x) {
	int i;
	if (x == 1) return false;
	bool flag = true;
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			flag = false;
			break;
		}
	}

}



int main() {
	//freopen("input.txt","rt",stdin);
	int n, num, i, tmp;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &num);
		tmp = reverse(num);
		if (isPrime(tmp)) printf("%d ", tmp);
	}

	return 0;

}
