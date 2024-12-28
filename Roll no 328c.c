#include<stdio.h>

// Define a structure for book information
struct Book
{
	char title[100];  // Title of the book
	char author[100]; // Author of the book
	float price;      // Price of the book
};

//Function to display book information
void displayBookInfo(struct Book b)
{
	printf("Book Title: %s\n ", b.title);
	printf("Author: %s\n", b.author );
	printf("Price: $%.2f\n", b.price );
}

int main() 
{
		// Declare a Book structure variable
	struct Book book1;
	
	// Input book details
	printf("Enter the book title: ");
	fgets(book1.title, sizeof(book1.title), stdin);
	//scanf("%c",book1.title);
	
	printf("Enter the author name: ");
	fgets(book1.author, sizeof(book1.author), stdin );
	
	printf("Enter the price of the book: ");
	scanf("%f", &book1.price );
	
	//Display book information
	displayBookInfo(book1);
	
	return 0;
}
