#include<stdio.h>
#include<Math.h>

int primzahl(int zahl) {
	int count = 0;
		for (int j = 1; j <= zahl; j++) {
			if (zahl % j == 0) {
				count++;

			}
		}if (count == 2) {
			printf_s("\n Die Zahl %d ist eine Primzahl.", zahl);
		}
		else {
			printf_s("\n Die Zahl %d ist keine Primzahl.", zahl);
		}

	return 0;
}

int main() {
	int zahl;
	printf_s("Tragen Sie eine Zahl ein: ");
	scanf_s("%d", &zahl);

	int primzahlen = primzahl(zahl);

	return 0;

}