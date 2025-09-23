/*
Name:Javan Ichinwa
Reg:PA106/G/28767/25
Description:Program to compute compound interest
compound_interest= p( 1+ r/n )^n*t
*/
//import libray header
#include<stdio.h>              
 int main() {
	//variables declaration
	float principle_amount,rate,time,number_of_years,compound_interest;
	
	//prompt the user to enter principle
	printf(" Enter principle_amount:");
	scanf("%f", &principle_amount);
	
	//prompt the user to enter rate
	printf("\n Enter rate:");
	scanf("%f", &rate);
	
	//prompt the user to enter time
	printf("\n Enter time:");
	scanf("%f", &time);
	
	//prompt the user to enter number_of_years
	printf("\n Enter number_of_years:");
	scanf("%f", &number_of_years);
	
	//compute compound_interest
	compound_interest = principle_amount *( 1 +rate/number_of_years) *( number_of_years * time);
	
	//Display compound_interest
	;printf("\n compound_interest is %f",compound_interest);
	
	return 0 ;
	
	
}