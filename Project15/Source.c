#include<stdio.h>
int sortierung(int anzahl[]) {
	int temp = 0;
	
	for (int j = 0; j < 5; j++) {
		for (int i = 0; i < 5; i++) {
			if (i == 4) {
				break;
			}
			if (anzahl[i] > anzahl[i + 1]) {
				temp = anzahl[i];
				anzahl[i] = anzahl[i + 1];
				anzahl[i + 1] = temp;
			}
		} //j++ broi kolko ot elementite sa si na myastoto
	}
	for (int i = 0; i < 5; i++) {
		printf_s("\nanzahl[%d] ist gleich %d.", i+1, anzahl[i]);
	}
	return 0;
}

int main() {
	int anzahl[5];
	printf_s("Sie muessen 5 Werte eintragen!");
	for (int i = 0; i < 5; i++) {
		printf_s("\nTragen Sie %d. Wert: ", i + 1);
		scanf_s("%d", &anzahl[i]);
	}
	sortierung(anzahl);
}