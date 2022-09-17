#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// This program takes input as marks obtained by a student in 5 subjects and calculates their percentage and based on that displays Grade obtained by a student.

int main(void) {
	float marks_physics;
	float marks_chemistry;
	float marks_biology;
	float marks_maths;
	float marks_computer;

	printf("Please enter Physics marks: ");
	scanf("%f", &marks_physics);

	printf("Please enter Chemistry marks: ");
	scanf("%f", &marks_chemistry);

	printf("Please enter biology marks: ");
	scanf("%f", &marks_biology);

	printf("Please enter mathematics marks: ");
	scanf("%f", &marks_maths);

	printf("Please enter computer marks: ");
	scanf("%f", &marks_computer);

	float percentage = ((marks_physics + marks_chemistry + marks_biology + marks_maths + marks_computer) / 500) * 100;		// calculates percentage based on marks

	if (percentage >= 90) {
		printf("You got Grade A and a percentage of %f.", percentage);
	}
	else if (percentage >= 80) {
		printf("You got Grade B and a percentage of %f.", percentage);
	}
	else if (percentage >= 70) {
		printf("You got Grade C and a percentage of %f.", percentage);
	}
	else if (percentage >= 60) {
		printf("You got Grade D and a percentage of %f.", percentage);
	}
	else if (percentage >= 40) {
		printf("You got Grade E and a percentage of %f.", percentage);
	}
	else {
		printf("You got Grade F and a percentage of %f.", percentage);
	}
	
	return 0;
}