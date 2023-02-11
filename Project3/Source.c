#include<stdio.h>

int summe(int zahl) {
	int sum = 0;
	do{
		sum += zahl%10;
		zahl = zahl/10;

	} while (zahl != 0);
	
	return sum;
}

int main() {
	int zahl;
	printf_s("Tragen Sie eine Zahl ein:");
	scanf_s("%d", &zahl);
	int sum = summe(zahl);
	printf_s("die Summe der Ziffer der Zahl ist %d.", sum);

}