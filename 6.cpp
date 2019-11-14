#include <stdio.h>

int main() {
	char s[50];
	int num[9];
	int j = 0;

	printf("1 \n");

	scanf_s("%s", &s , sizeof(s));

	printf("2 \n");

	printf("size of s :%d \n", sizeof(s));

	for (int i = sizeof(s)-1; i >= 0; i--) {
		if (s[i] == NULL) continue;
		printf("3");


		if (48 <= s[i] <= 57) {
			num[j] = s[i] - 48;
			j++;
		}
	}

	for (int k = 0; k < j; k++)
		printf("%d ", num[k]);

	
}