#include <stdio.h>

/* print Farenheit-Celsius table
	for fahr = 0, 20, ..., 300; floating-point version 
   Then print corresponding Celsius-Tarenheit table */
main() {
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */
	
	fahr = lower;
	
	printf("Farenheit-Celsius Table\n");
	printf("=======================\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	// reset celsius value
	celsius = 0;

	printf("\nCelsius-Farenheit Table\n");
	printf("=========================\n");
	while (celsius <= upper) {
		fahr = ((celsius * 9.0) / 5.0) + 32.0;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}	
}
