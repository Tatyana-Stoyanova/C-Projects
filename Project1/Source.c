#include<stdio.h>

double mittelsumme(int n) {
	int count = 1;
	int sum = n;
	int z;
	do {
		scanf_s("%d", &z);
		sum += z;
		count++;
	} while (z != -999);

	sum -= -999;
	count--;
	
	double mittelsumme = sum / count;
	return mittelsumme;

}

int main() {
	int zahl;
	printf_s("Tragen Sie eine Reihe von Zahlen (-999 fuer Ende):");
	scanf_s("%d", &zahl);
	double mittelsum = mittelsumme(zahl);
	printf_s("Die Mittelsumme der eingetragenen Zahlen ist %lf.", mittelsum);
}