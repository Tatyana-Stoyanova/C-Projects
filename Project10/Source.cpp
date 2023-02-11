#include<stdio.h>
#include<Math.h>

int summieren(int n) {
	int summe = 0;
	for (int i = 1; i <= n; i++) {
		summe += pow(i, 2);
	}
	return summe;
}

int main() {
	int n;
	printf_s("Tragen Sie die Anzahl der natuerlichen Zahlen, deren 2. Potenzen summiert werden:");
	scanf_s("%d", &n);
	int sum = summieren(n);
	printf_s("Die Summe der Quadraten von ersten %d natuerliche Zahlen ist %d.", n, sum);
}