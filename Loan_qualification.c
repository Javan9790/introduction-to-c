/*
Name:Javan Ichingwa
Reg:PA106/G/28767/25
Description:program to implement age and annual_income
*/
//import libray header
#include<stdio.h>

//main function
int main(){
//variable declaration
int age, annual_income;

//prompt the user to enter age and annual_income

printf("Enter your age\n");
scanf("%d", &age);

printf("Enter your annual_income\n");
scanf("%d", &annual_income);

if(age == 21 && annual_income == 21000){
	printf("congrulation you qualify for the loan\n");
}
else{
	printf("unfortunately,we are unable to offer you a loan at this time\n");
};

return 0;
	
};
