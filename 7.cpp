#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	//freopen("input.txt","rt",stdin);
	char a[100];
	char b[100];

	//printf("%d",1);

	gets(a);

	//printf("%d",2);
	int j = 0;
	for (int i = 0; a[i] != '\0'; i++) {
		//printf("%c \n",a[i]);
		if (a[i] == ' ') continue;
		else if (a[i] >= 65 && a[i] <= 90) b[j++] = a[i] + 32;
		else b[j++] = a[i];
	}

	b[j] = '\0';

	printf("%s", &b);

}