#include <stdio.h>

int main() {
	int Number1;
	int Number2;
	int Number3;

	printf("Please enter the first number: ");
	scanf_s("%d", &Number1);

	printf("Please enter the second number: ");
	scanf_s("%d", &Number2);

	printf("Please enter the third number: ");
	scanf_s("%d", &Number3);

	if (Number1 > Number2 && Number1 > Number3) {
		printf("%d is the greater of the three numbers.", Number1);
	}
	else if (Number1 < Number2 && Number2 > Number3) {
		printf("%d is the greater of the three numbers.", Number2);
	}
	else if (Number1 < Number3 && Number2 < Number3) {
		printf("%d is the greater of the three numbers.", Number3);
	}
	else {
		printf("All three Numbers have the same value.");
	}

	return 0;
}