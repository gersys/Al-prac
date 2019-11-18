#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int pow(int n) {
	int result = 1;
	for (int i = 1; i <= n; i++)
		result *= 10;

	return result;
}

int main() {
	//freopen("input.txt","rt",stdin);
	int n = 0;
	int max = 0;
	int cnt = 0;

	scanf("%d", &n);

	for (int i = 1; n / i != 0; i = i * 10)
		max++;

	//printf("%d \n",max);

	for (int i = 1; i < max; i++)
		cnt += (pow(i) - pow(i - 1)) * i;
	//printf("%d\n",cnt);

	cnt += (n - pow(max - 1) + 1) * max;

	printf("%d", cnt);

	return 0;
