#include<stdio.h>
#include<math.h>

bool ziffern(int zahl, int* hunderter, int* zehner, int* einer) {
	*hunderter = zahl/100;
	*zehner = zahl / 10 % 10;
	*einer = zahl % 10;
	printf("%d - %d - %d", *hunderter, *zehner, *einer);
	if (*hunderter > 9 || *hunderter == 0) {
		return false;
	}else{
		return true;
	}
}

int main() {
	int zahl;
	printf("Tragen Sie einen ganzen Dreiziffernzahl: ");
	scanf_s("%d", &zahl);
	int hunderter;
	int zehner;
	int einer;
	bool isDreistellig = ziffern(zahl, &hunderter, &zehner, &einer);
	printf("\n Die Zahl ist dreistellig: % s", isDreistellig ? "true" : "false");
}