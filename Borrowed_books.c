/*
A local library wants to keep track of the titles of books borrowed each day. Write a C
program that allows the librarian to enter book titles and store each title in a text file
named borrowed_books.txt.
i. The program should not delete existing records when a new title is added.
ii. Display a confirmation message once the title is successfully stored.
*/
#include<stdio.h>

int main (){
	FILE *fptr;
	int book_titles;
	
	//create the file
	fptr=fopen("C:\-__-\OneDrive\Documents\Projects\Borrowed_books.txt","r");
	
	//get user input
	printf("Enter book titles :\n");
	scanf("%d", &book_titles);
	
	//write user in put to borrowed_booksfile.txt
	fprintf(fptr,"The user entered book titles:%d\n");
	
	//close the file
	fclose(fptr);
	
	printf("The results has been written to Borrowed_books.txt.\n");
	
	
	
	return 0;
}