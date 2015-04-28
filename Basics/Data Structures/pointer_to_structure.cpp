#include <iostream>
#include <cstring>

using namespace std;

void printBook(struct Books *book);

struct Books 
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main()
{

	struct Books Book1;
	struct Books Book2;

	strcpy(Book1.author, "William Sheakspear");
	strcpy(Book1.title, "Hamlet");
	strcpy(Book1.subject, "Is a tragedy written by William Shakespeare at an uncertain date between 1599 and 1602.");
	Book1.book_id = 2465;

	strcpy(Book2.author, "William Sheakspear");
	strcpy(Book2.title, "The Merchant of Venice");
	strcpy(Book2.subject, "Is a play by William Shakespeare about a merchant in 16th century Venice.");
	Book2.book_id = 1111;

	printBook(&Book1);
	printBook(&Book2);

	return 0;
}

void printBook(struct Books *book)
{
	cout << book->author << endl;
	cout << book->title << endl;
	cout << book->subject << endl;
	cout << book->book_id << endl;
	cout << endl;

	return;
}
