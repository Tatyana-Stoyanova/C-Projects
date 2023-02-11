#include<stdio.h>
#include<Math.h>

int primnenner(int zahl) {
	int nenner = 2;
	int count = 0;
	while (nenner <= zahl) {
		for (int i = 2; i <= nenner; i++) {
			if (nenner % i == 0) {
				count++;
			}
		}if (count == 1 && zahl%nenner==0) {
			printf_s("\n Die Zahl %d kann durch die Primzahl %d dividiert werden.", zahl, nenner);
		}
		count = 0;
		nenner++;
	}
	return 0;
}
int main() {
	int zahl;
	printf_s("Tragen Sie eiine ganzzahlige Zahl ein:");
	scanf_s("%d", &zahl);
	int division = primnenner(zahl);
}