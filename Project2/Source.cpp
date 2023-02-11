#include<stdio.h>
#include<Math.h>

int fibonachi(int anzahl) {
	int f1 = 0;
	int f2 = 1;
	printf_s("\n f(1) = %d", f1);
	printf_s("\n f(2) = %d", f2);
	for (int i = 0; i < anzahl-2; i ++) {
		int j = i + 3;
		int fn = f1 + f2;
		f1 = f2;
		f2 = fn;
		printf_s("\n f(%d) = %d", j, fn);
	}
	return 0;
}


int main() {
	int n; 
	printf_s("Tragen Sie Anzahl der Zahlen ein:");
	scanf_s("%d", &n);
	int fib_reihe = fibonachi(n);
}