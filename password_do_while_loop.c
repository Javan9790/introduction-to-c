/*
A password system reguires the user to enter the correct password *1234* to log in
using a do while loop. write a program that keeps prompting the user for the password 
until the correct one is entered.once correct display "Access granted"
*/
  #include <stdio.h>
  
  int main ()
  {
	  int password;
	  int correct_password=1234; //start
	  
	  do{
	  ("Enter the password:\t");
	  scanf("%d",&password);
	  
	  if(password != correct_password)
	  	printf("incorrect_password.try again\n");
	  
	  
	    
  }while (password!=correct_password);//stop
  printf("Access granted\n");

  
  
  
  
  return 0;
  
  }