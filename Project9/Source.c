#include<stdio.h>

int capitalLetter(char symbol) {
	if (symbol>64 && symbol< 91) {
		printf_s("Das eingetragene Symbol ist eine grosse Buchstabe.");
	}else if (symbol>96 && symbol<123){
		printf_s("Das eingetragene Symbol ist eine kleine Buchstabe.");
	}else {
		printf_s("Das eingetragene Symbol ist KEINE Buchstabe.");
	}return 0;
}

int main() {
	char symbol;
	printf_s("Tragen Sie ein Symbol ein: ");
	scanf_s("%c", &symbol);
	capitalLetter(symbol);
}