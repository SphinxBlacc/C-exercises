#include <stdio.h>

int main() {
	
	int number;

	printf("Enter the Number: ");
	scanf_s("%d", &number);

	if (number > 0) {
		printf("%d is a positive number.", number);
	}
	else if (number < 0) {
		printf("%d is a negative number.", number);
	}
	else {
		printf("The number entered is zero.");
	}

	return 0;
}