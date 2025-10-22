/*
Write a C function named calculateFare() that takes the distance traveled (in kilometers)
as input and returns the total fare.
Assume the fare rate is KSh. 50 per kilometer.
Example: If the distance is 10 km, the function should return 500.
*/

#include<stdio.h>
float totalfare(float distance, int rate);

void main ()
{
	int rate = 50;
	float distance, result;
	
	
	printf("Enter distance in kilometers: ");
	scanf("%f", &distance); 
	
result= totalfare(distance , rate);
printf("totalfare is Ksh %.2f\n",result);
	
}


float totalfare(float distance,int rate){
float totalfare	;
 totalfare = distance * rate;
return totalfare ;
}