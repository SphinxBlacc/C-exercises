#include <stdio.h>

int main() {

	char character;

	printf("Please enter a character: ");
	scanf_s("%c", &character);

	if (character == toupper(character)) {
		printf("The entered character is in Uppercase.");
	}
	else if (character == tolower(character)) {
		printf("The entered character is in Lowercase.");
	}

	return 0;
}