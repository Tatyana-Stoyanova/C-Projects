#include<stdio.h>

int summe(int anzahl) {
	int sum = 0;
	int n;
	printf_s("Tragen Sie %d Zahlen ein: ", anzahl);
	for (int i = 0; i < anzahl; i++) {
		scanf_s("%d", &n);
		sum += n;
	}
	printf_s("\n Die Summe der Zahlen ist %d.", sum);
	if (sum % 2 == 0) {
		printf_s("\n Die Summe ist eine gerade Zahl.");
	}
	else {
		printf_s("\n Die Summe ist eine ungerade Zahl.");
	}
	return 0;
}

int main() {
	int anzahl;
	printf_s("Die Anzahl der Zahlen, die summiert werden, ist: ");
	scanf_s("%d", &anzahl);
	summe(anzahl);

}