/*
1D Array – Weekly Revenue Tracker
The hotel records its total revenue for each day of the week (7 days).
1. Use a 1D array revenue[7] to store the daily revenues.
2. Input the revenue for each day.
3. Calculate and display:
• The total weekly revenue.
• The average daily revenue.
*/

#include<stdio.h>

int main (){
	
	float revenue[7];
	int i;
	float total=0;
	float average ;
	
 printf("Enter revenue for each day of week in ksh:\n");
 for(i=0;i<7;i++){
 printf("Day of the week %d\n",i+1);
 scanf("%f",&revenue[i]);
 total +=revenue[i];//add to revenue
 }
 average =total/7;//calculate average
 
 printf("Total weekly revenue is ksh%.2f\n",total);
 printf("average daily revenue is ksh %.2f\n",average);
 
 
	return 0;
}