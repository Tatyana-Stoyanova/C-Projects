#include<stdio.h>
int maxZahl(int anzahl) {
	int max = 0;
	int count = 0;
	int n;
	printf_s("Tragen Sie %d Zahlen ein: ", anzahl);
	while (count < anzahl) {
		scanf_s("%d", &n);
		count++;
		if (n > max) {
			max = n;
		}

	}return max;
}

int main() {
	int anzahl;
	printf_s("Tragen Sie eine Zahl ein: ");
	scanf_s("%d", &anzahl);
	int zahlmax = maxZahl(anzahl);
	printf_s("Die groesste eingetragene Zahl ist %d.", zahlmax);
}