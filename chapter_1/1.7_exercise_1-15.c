#include <stdio.h>

// function prototypes
float celsius_to_farenheit(float celsius);
float farenheit_to_celsius(float farenheit);

/* print Farenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating-point version 
   Then print corresponding Celsius-Tarenheit table */
main() {
	float fahr, celsius;
	int lower, upper, step;
	
	fahr = celsius = lower = 0;	/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */
	
	printf("Farenheit-Celsius Table\n");
	printf("=======================\n");
	while (fahr <= upper) { 
		printf("%3.0f %6.1f\n", fahr, 
			farenheit_to_celsius(fahr));
		fahr = fahr + step;
	}

	printf("\nCelsius-Farenheit Table\n");
	printf("=========================\n");
	while (celsius <= upper) {
		printf("%3.0f %6.1f\n", celsius, 
			celsius_to_farenheit(celsius));
		celsius = celsius + step;
	}	
}

/* celsius_to_farenheit: convert given celsius value to farenheit */
float celsius_to_farenheit(float celsius) {
	return ((celsius * 9.0) / 5.0) + 32.0;
}

/* farenheit_to_celsius: convert given farenheit value to celsius */
float farenheit_to_celsius(float farenheit) {
	return (5.0/9.0) * (farenheit-32.0);
}
