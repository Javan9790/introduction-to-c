/*
option 1,   100MB  bundles =50 KES cost
        2,   500MB           =200
       3,    1GB            =350
       4,     2GB           =600
*/

# include <stdio.h>

int main (){
	//variable declaration
	int choice;
	
	//prompt the user to enter their choice
	printf("Enter an option:\n" );
	printf("option 1\n");
	printf("option 2\n");
	printf("option 3\n");
	printf("0ption 4\n");
	
	if(choice >=1 && choice <=4)
		
		switch(choice)
		{
			case 1:
				printf("you typed 100 1\n");
				break;
			case 2:
				printf("you typed 2\n");
				break;
			case 3:
				printf("you typed 3\n");
				break;
			case 4:
				printf("you typed 4\n");
				break;
		 default:printf("invalid option");
			
			
		}
	
	return 0;
	
	
		
		
}