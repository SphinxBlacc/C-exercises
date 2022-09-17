#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//This programs takes input of an employees basic salary and calculates their Gross Salary.

int main(void) {

	float base_pay;
	float HRA;
	float DA;
	float gross_salary;

	printf("Please enter your Basic Salary(in CAD): ");
	scanf("%f", &base_pay);

	if (base_pay <= 10000) {

		HRA = 20;
		DA = 80;
		gross_salary = base_pay + base_pay * (HRA / 100) + base_pay * (DA / 100);

		printf("Your gross salary is CAD %f.", gross_salary);
	}
	else if (base_pay <= 20000) {

		HRA = 25;
		DA = 90;
		gross_salary = base_pay + base_pay * (HRA / 100) + base_pay * (DA / 100);

		printf("Your gross salary is CAD %f.", gross_salary);
	}
	else {
		
		HRA = 30;
		DA = 95;
		gross_salary = base_pay + base_pay * (HRA / 100) + base_pay * (DA / 100);

		printf("Your gross salary is CAD %f.", gross_salary);
	}
	
	return 0;
}