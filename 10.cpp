#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int digit_sum(int x) {
	int sum;
	for (; x != 0;) {
		sum += x % 10;
		x = x / 10;
	}

	return sum;

}

int main() {
	//freopen("input.txt","rt",stdin);

	int n = 0;
	int num;
	int max = -1;
	int res;
	int temp = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		temp = digit_sum(num);
		if (temp > max) {
			max = temp;
			res = num;
		}
	}

	printf("%d", res);

	return 0;

}
