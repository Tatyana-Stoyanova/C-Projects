#include<stdio.h>
#include<Math.h>

int isQuadrat(int zahl) {
	for (int i = 1; i <= sqrt(zahl); i++) {
		if (zahl / i == i) {
			return printf_s("Die Zahl %d ist Quadrat der Zahl %d.", zahl, i);
		}
	} return printf_s("Die Zahl %d ist kein Quadrat.", zahl);
}
int main() {
	int n;
	printf_s("Tragen Sie eine Zahl ein: ");
	scanf_s("%d", &n);
	isQuadrat(n);
}