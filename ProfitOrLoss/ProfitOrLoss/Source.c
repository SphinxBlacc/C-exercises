#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// This program asks the initial and current investment value from the user and displays profit or loss amount and percentage.

int main(void) {
	float initial_investment_value;
	float current_investment_value;

	printf("Enter initial investment amount: \n");
	scanf("%f", &initial_investment_value);

	printf("Enter current investment value: \n");
	scanf("%f", &current_investment_value);

	float profit_percentage;
	float profit_amount;
	float loss_percentage;
	float loss_amount;

	if (initial_investment_value < current_investment_value) {
		
		profit_percentage = ((current_investment_value - initial_investment_value) / initial_investment_value) * 100;
		profit_amount = (initial_investment_value * profit_percentage) / 100;

		printf("You have made a profit of CAD %f on an investment of CAD %f. Your profit percentage is %f.\n", profit_amount, initial_investment_value, profit_percentage);
	}
	else {
		loss_percentage = ((initial_investment_value - current_investment_value) / initial_investment_value) * 100;
		loss_amount = (initial_investment_value * loss_percentage) / 100;

		printf("You have made a loss of CAD %f on an investment of CAD %f. Your loss percentage is %f.\n", loss_amount, initial_investment_value, loss_percentage);
	}

	return 0;
}