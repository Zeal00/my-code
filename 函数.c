#include<stdio.h>
int fact(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 1;
	}
	return fact(n - 1) + fact(n - 2);
}
int main(void) {
	int result = fact(6);
	printf("%d\n", result);
	return 0;
}