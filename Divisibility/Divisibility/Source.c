#include <stdio.h>

int main() {

	int number;

	printf("Enter a number: ");
	scanf_s("%d", &number);

	if (number % 5 == 0 && number % 11 == 0) {
		printf("%d is divisible by both 5 and 11.", number);
	}
	else {
		printf("%d is not divisible by 5 and 11.", number);
	}

	return 0;
}