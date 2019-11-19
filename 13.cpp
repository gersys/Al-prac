#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int box[10];

int main() {
	//freopen("input.txt","rt",stdin);
	char n[101];
	int a;
	int max = -2147000000;
	int argmax = -1;
	int digit;

	scanf("%s", &n);

	for (int i = 0; n[i] != '\0'; i++) {
		digit = n[i] - 48;
		box[digit]++;
	}

	for (int i = 0; i < 10; i++) {
		if (box[i] >= max) {
			max = box[i];
			argmax = i;
		}
	}


	printf("%d", argmax);
	return 0;

}
