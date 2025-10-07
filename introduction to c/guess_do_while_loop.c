/*
 Write a C program that implements a number guessing game.
  The computer should generate a
random number in the range 1 to 20 (inclusive).
 The program should repeatedly prompt the
player to enter a guess and then respond with one of the
 following messages:
• "Too high!" if the guess is greater than the secret number.
• "Too low!" if the guess is less than the secret number.
• "Congratulations!" if the guess is equal to the secret number
*/

#include <stdio.h>

int main(){
	
	int secretnumber,guess;
	secretnumber= rand()%20+1;
	
	printf("number guessing game\n");
	printf("am thinking of a number between 1 and 20.\n");
	
	do{
		printf("Enter your guess:\n");
		scanf("%d", &guess);
		
		if(guess>secretnumber){
			printf("Too high!\n");
			
		}else if(guess<secretnumber){
			printf("Too low!\n");
			
		}else if(guess=secretnumber){
			printf("Congratulations! you guessed it right \n");
		}
	}while(guess != secretnumber);
	
	
	
	
	return 0;
}