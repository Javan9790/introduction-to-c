/*
Create a C function called calculateElectricBill() that takes the number of units
consumed as input and returns the total bill amount based on the following rates:
 For the first 100 units ? KSh. 10 per unit
 For the next 100 units ? KSh. 15 per unit
 Above 200 units ? KSh. 20 per unit
Example: If 250 units are consumed, the total bill should be KSh. 3,500.
*/
#include<stdio.h>

float totalbill(int unitsconsumed, int rate);

void main(){
	int unitsconsumed,rate;
	float result;
	
	printf("Enter the number of units consumed:");
	scanf("%d", &unitsconsumed);
	
	if(unitsconsumed>0 && unitsconsumed <=100)
		(rate=10);
    else if(unitsconsumed>100 && unitsconsumed<=200)
		(rate=15);
	else if(unitsconsumed >200)
		(rate=20);
	
	result=totalbill(unitsconsumed, rate);
printf("The total bill = KES%.2f\n", result);		
	
}
float totalbill(int unitsconsumed,int rate){
	float totalbill;
	totalbill = unitsconsumed * rate;		
return totalbill;	
}

