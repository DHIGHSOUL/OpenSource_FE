#include <stdio.h>
#include "add.h"
#include "subtract.h"
#include "multiply.h"
#include "divide.h"

int main() {
	double a = 28;
	double b = 3;

	int input;
	double result = 0;
	printf("Choose 1) add 2) subtract 3) multiply 4) divide: ");
	scanf("%d", &input);

	if(input==1) {
		result = add(a, b);
	} else if(input==2) {
		result = subtract(a, b);
	} else if(input==3) {
		result = multiply(a, b);
	} else if(input==4) {
		result = divide(a, b);
	}

	printf("Result is %f\n", result);
	return 0;
}
