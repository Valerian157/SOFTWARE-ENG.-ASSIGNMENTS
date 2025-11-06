/*Valerian Sarange
PA106/G/28839/25
A program on borrowed books*/

#include<stdio.h>

int main(){
	
	char book_title[100];
	FILE *fptr;
	
	fptr = fopen("borrowed_books.txt.","a");
	
	if(fptr == NULL){
		printf("error opening the file!\n");
		return 1;
	}
	
	printf("enter the book_title of the borrowed book\n");
	fgets(book_title, sizeof(book_title),stdin);
	
	fprintf(fptr, "%s", book_title);
	
	fclose(fptr);
	
	printf("book_title successfully stored in borrowed_books.txt.\n");
	
	return 0;
	
	
	
}