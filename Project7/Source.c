#include<stdio.h>
int binarzahl(int zahl) {

	/*while (zahl > 0) {
		if (zahl % 2 == 0) {
			printf_s("%d", 0);
		}
		else if (zahl % 2 == 1 || zahl == 1) {
			printf_s("%d", 1);
		}
		zahl /= 2;
	}*/
	
	for (zahl; zahl > 0; zahl = zahl / 2) {
		if (zahl % 2 == 1 || zahl == 1) {
			printf_s("%d", 1);
		}else if(zahl % 2 == 0) {
			printf_s("%d", 0);
		}
	}
	return zahl;
}

int main() {
	int zahl;
	printf_s("Tragen Sie eine Zahl ein: ");
	scanf_s("%d", &zahl);
	int binform = binarzahl(zahl);
	
}