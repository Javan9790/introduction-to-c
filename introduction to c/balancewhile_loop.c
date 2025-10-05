/*
A bank atm allows withdrawals as long as the amount balance is above.
write a program using a while loop where the user enters the amount until the
balance is zero or negative.display the balance using a while loop.
*/

# include <stdio.h>

int main ()
{
	int amount;
	int balance = 500; //start
	
	
	printf("Your current balance is %d\n", balance);
	
	while(balance>=0)
	{
		printf("Enter the amount to withdraw.\n");
		scanf("%d", &amount);
		balance-= amount;
		printf("balance is %d:\n",balance);
		
	}
printf("insuffient balance");

return 0;	
	
}