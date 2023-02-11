#include<stdio.h>
#include<Math.h>

double armstrong(int n) {
	double a = n % 10;
	printf_s("\n %.0lf",a);
	double b = (n % 100 - a)/10;
	printf_s("\n %.0lf", b);
	double c = n / 100;
	printf_s("\n %.0lf", c);
	double d = pow(a, 3) + pow(b, 3) + pow(c, 3);
	if (d == n) {
		return printf_s("\n Die Zahl ist eine Armstrongzahl!");
	}
	else {
		return printf_s("\n Die Zahl ist keine Armstrongzahl!");
	}
}


int main() {
	int zahl;
	printf_s("Schreiben Sie eine dreistellige Zahl:");
	scanf_s("%d", &zahl);
	armstrong(zahl);
	
}