#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int output[50002];

int main() {
	//freopen("input.txt","rt",stdin);

	int n = 0;


	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
		for (int j = i; j <= n; j = j + i)
			output[j]++;


	for (int i = 1; i <= n; i++)
		printf("%d ", output[i]);


	return 0;

}
