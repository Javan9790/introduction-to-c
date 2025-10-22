/*
Create a C function named convertToCelsius() that takes temperature in Fahrenheit as
input and returns the temperature in Celsius.
Use the formula:
*/
#include<stdio.h>
float temperature_in_Celsius(float temperature);

void main()
{
	float temperature ,result;
	printf("Enter temperature_in_Fahrenheit:");
	scanf("%f", &temperature);
	
	result = temperature_in_Celsius(temperature);
	printf("temperature_in_Celsius is  %.2f\n", result);
	return 0;
}
float temperature_in_Celsius(float temperature ) {
	float temperature_in_Celsius;
	temperature_in_Celsius = (temperature-32)*5/9;
	return temperature_in_Celsius;
}

