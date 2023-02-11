#include<stdio.h>
int geradezahlen(int anfang, int ende) {
	int count = 0;
	for (anfang; anfang <= ende; anfang++) {
		if (anfang % 2 == 0) {
			printf_s("\n%d", anfang);
			count++;
		}
	}return count;
}

int main() {
	int anfang;
	printf_s("Tragen Sie den Anfang des Intervals ein: ");
	scanf_s("%d", &anfang);
	int ende;
	printf_s("Tragen Sie das Ende des Intervals ein, der von %d beginnt: ", anfang);
	scanf_s("%d", &ende);
	int anzahl = geradezahlen(anfang, ende);
	printf_s("\nDie Anzahl der geraden Zahlen im Interval von %d bis %d ist %d.", anfang, ende, anzahl);
}