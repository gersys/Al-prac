#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	//freopen("input.txt","rt",stdin);

	char a[30];

	scanf("%s", &a);

	int num = 0;

	for (int i = 0; a[i] != '\0'; i++) {
		//printf("%d ",num);
		if (a[i] == '(') num++;
		else {
			if (num == 0) {
				num--;
				break;
			}
			else num--;
		}
	}

	if (num == 0) printf("YES");
	else printf("NO");


}