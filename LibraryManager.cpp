#include <iostream>
#include <string>
#include <stdio.h>
#include <ctime>
using namespace std;

#define now time(0)
#define MAX_BOOKS 200

class Book {
		
	public:
		int bookId;
		string name;
		string author;
		int year;
		int stockNumber;
		int state; //avaliable to be borrowed -> 1: no | 0: yes	
		Book();
		Book(int n_id, string n_Name, string n_Author, int n_year);
		NewBook();
};

Book books[MAX_BOOKS];

void buildUIMenu(){
	
	cout<<"---------------------------------------"<<endl;
	cout<<"1. Register new book"<<endl;
	cout<<"2. Gather book information"<<endl;
	cout<<"3. Borrow book"<<endl;
	cout<<"4. Return book"<<endl;
	cout<<"---------------------------------------"<<endl;
	
}

Book::Book(){
	
};

Book::Book(int n_id, string n_Name, string n_Author, int n_year){
	
	this->bookId = n_id;
	this->name = n_Name;
	this->author = n_Author;
	this->year = n_year;
	this->stockNumber = this->stockNumber + 1;
	
	if(this->stockNumber == 0){
		this->state = 1;
	}else{
		this->state = 0;
	}
};

class Student {
	
	int id;
	string name;
	string lastName;

};

void Book::newBook(){
	
	int n_id;
	string n_Name;
	string n_Author;
	int n_year;
	
	system("cls");
	cout<<"---------------------------------------"<<endl;
	cout<<"Please fill the following data:"<<endl;
	cout<<"---------------------------------------"<<endl;
	cout<<"Book ID: ";
	cin>>n_id;
	cout<<"Book name: ";
	cin>>n_Name;
	cout<<"Book author: ";
	cin>>n_Author;
	cout<<"Book year of publish: ";
	cin>>n_year;
	
	Book a(n_id, n_Name, n_Author, n_year);
	
}

void Book::getBook(){
	
}

void Book::borrowBook(){
	
}

void Book::returnBook(){
	
}

int main(){
	
	//Build Menu and get User input
	
	int menu;
	buildUIMenu();
	cin>>menu;
	
	switch(menu){
		
		case 1: newBook();
		break;
		case 2: getBook();
		break;
		case 3: borrowBook();
		break;
		case 4: returnBook();
		break;
		
	}
	
	return 0;
}
