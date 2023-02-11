#include<stdio.h>
#include<Math.h>

int toDezimalzahl(int binzahl) {
	int dezimal = 0;
	int potenz = 0;
	for (binzahl; binzahl > 0; potenz++) {
		dezimal += binzahl % 10 * pow(2, potenz);
		binzahl = binzahl/10;
	}
	return dezimal;
}

int main() {
	int binzahl;
	printf_s("Tragen Sie eine binare Zahl ein: ");
	scanf_s("%d", &binzahl);
	int dezimalzahl = toDezimalzahl(binzahl);
	printf_s("Die binare Zahl %d ist im Dezimalzahlensystem %d.", binzahl, dezimalzahl);
}