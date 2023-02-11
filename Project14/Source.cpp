#include<stdio.h>
#include<Math.h>

int ziffer(int zahl) {
	int count = 0;
	int num = zahl;
	for (num; num > 0; num /= 10) {
		count++;
	}printf_s("Die Zahl %d ist %d-stellig.", zahl, count);
		
	int nomer = count;//pokazva p koya pod red cifra e
	int schritt = 0;// pokazva kolko ot cifrite sa bili veche p
	
	while (zahl != 0) {
		int p = zahl % 10;
		for (int i = 1; i < count; i++) {//i-to deli cisloto, za da vsemem ostatika mu i sled vsyaka iteracia 
										//na for-cikula i se uvelichava, za da sravnim p s vsyaka druga cifra
			int potenz = pow(10, i);
			
			if (p == (zahl / potenz) % 10 && (zahl / potenz) != 0) {
				printf_s("\nDer Ziffer %d (am %d. Platz) ist gleich dem Ziffer %d(am %d. Platz).", p, nomer, (zahl / potenz) % 10, count-schritt-i);
			}
		}	schritt++; 
			nomer--;
			zahl /= 10; // delim chisloto na 10 bez ostatuk, za da poluchim na myastoto na p chisloto na deseticite i t.n. 
	}					// dokato zahl ne stane 0;
	return 0;
}
int main() {
	int zahl;
	printf_s("Tragen Sie eine Zahl ein: ");
	scanf_s("%d", &zahl);
	ziffer(zahl);

}