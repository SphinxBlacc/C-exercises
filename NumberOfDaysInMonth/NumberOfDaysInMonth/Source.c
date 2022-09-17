#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// This program takes month number as input from user and prints out the number of days in that month

int main(void) {

	int month_number;
	int month_days;

	printf("Please enter a month number (1-12): \n");
	scanf("%d", &month_number);

	if ((month_number % 2 == 0 && month_number < 8 && month_number != 2) || (month_number % 2 != 0 && month_number >= 9)) {
		month_days = 30;
		printf("The given month has %d days.\n", month_days);
	}
	else if ((month_number % 2 == 0 && month_number >= 8) || (month_number % 2 != 0 && month_number <= 7)) {
		month_days = 31;
		printf("The given month has %d days.\n", month_days);
	}
	else {
		printf("The given month has either 28 or 29 days.\n");
	}

	return 0;
}