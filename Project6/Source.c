#include<stdio.h>
int fakultaet(int num) {
	int fakturiel = 1;
	for (int i = 2; i <= num; i++) {
		fakturiel *= i;
	}
	return fakturiel;
}

int main() {
	int zahl;
	printf_s("Tragen Sie eine Zahl ein:");
	scanf_s("%d", &zahl);
	int fakultaet_zahl = fakultaet(zahl);
	printf_s("Das Fakultaet der Zahl %d ist %d.", zahl, fakultaet_zahl);
}