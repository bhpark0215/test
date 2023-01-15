#include <stdio.h>
int main() {
	char word[100] = {};
	char what = ',';
	int cnt = 0;
	printf("ют╥б:");
	scanf("%s", word);
	while (what != 0) {
		what = word[cnt];
		cnt++;
	}
	printf("%d\n", cnt - 1);
	return 0;
}