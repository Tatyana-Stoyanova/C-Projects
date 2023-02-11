#include<stdio.h>
#include<Math.h>
int umkehren(int zahl) {

		int umkehrzahl = 0;
		int count = 0;
		int y = zahl;
		for (y; y > 0; count++) {
			y = y / 10;
		}
		while (zahl != 0) {
			umkehrzahl = umkehrzahl + zahl % 10 * pow(10, count-1);
			zahl = zahl / 10;
			count--;

		} 

		return umkehrzahl;
	
}

int main() {
	int zahl;
	printf_s("Tragen Sie eine Zahl ein: ");
	scanf_s("%d", &zahl);
	int umkehrzahl = umkehren(zahl);
	printf_s("Die Umkehrzahl ist %d.", umkehrzahl);
}