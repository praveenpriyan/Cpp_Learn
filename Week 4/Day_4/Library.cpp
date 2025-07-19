#include<iostream>
#include<vector>
#include <string>
#include <unordered_map>
#include<algorithm>
using namespace std;

class Author
{
private:
    string AuthorName;
public:
    Author(const string& name):AuthorName(name){}
    string getName()const{return AuthorName;}
};

class Book
{
private:
    string title;
    string isbn;
    const Author& author;
    bool borrowed;
public:
    Book(const string& title, const string& isbn, const Author& author):
        title(title),isbn(isbn),author(author),borrowed(false){}
    string getTitle()const{return title;}
    string getISBN()const{return isbn;}
    string getAuthor()const{return author.getName();}
    bool isBorrowed()const{return borrowed;}
    void borrowBook(){borrowed=true;}
    void returnBook(){borrowed=false;}
};

class Member
{
private:
    string name;
    vector<Book*> borrowedBooks;
public:
    Member(string member_name):name(member_name){}
    string getName()const{return name;}

    void borrowBook(Book& book) {
        if (!book.isBorrowed()) {
            borrowedBooks.push_back(&book);
            book.borrowBook();
            cout << name << " borrowed " << book.getTitle() <<endl;
        } else {
            cout << book.getTitle() << " is already borrowed." <<endl;
        }
    }
    void returnBook(Book& book) {
        auto it = find(borrowedBooks.begin(), borrowedBooks.end(), &book);
        if (it != borrowedBooks.end()) {
            borrowedBooks.erase(it);
            book.returnBook();
            cout << name << " returned " << book.getTitle() <<endl;
        } else {
            cout << name << " did not borrow " << book.getTitle() <<endl;
        }
    }
};

class Library {
public:
    void addBook(const Book& book) {
        books.push_back(book);
        bookMap[book.getISBN()] = &books.back();
    }

    Book* findBookByISBN(const string& isbn) {
        if (bookMap.find(isbn) != bookMap.end()) {
            return bookMap[isbn];
        }
        return nullptr;
    }

    void listAvailableBooks() const {
        for (const auto& book : books) {
            if (!book.isBorrowed()) {
                cout << "Title: " << book.getTitle() << ", ISBN: " << book.getISBN() 
                          << ", Author: " << book.getAuthor() <<endl;
            }
        }
    }

private:
    vector<Book> books;
    unordered_map<string, Book*> bookMap;
};

int main() {
    Author author1("J.K. Rowling");
    Author author2("J.R.R. Tolkien");

    Book book1("Harry Potter and the Philosopher's Stone", "9780747532699", author1);
    Book book2("The Hobbit", "9780618968633", author2);

    Member member1("Alice");
    Member member2("Bob");

    Library library;
    library.addBook(book1);
    library.addBook(book2);

    cout << "Available books in the library:" <<endl;
    library.listAvailableBooks();
    
    cout <<endl;

    member1.borrowBook(book1);
    member2.borrowBook(book1);  // Trying to borrow a book that's already borrowed

    cout <<endl;

    cout << "Available books after borrowing:" <<endl;
    library.listAvailableBooks();

    cout << endl;

    member1.returnBook(book1);
    member2.borrowBook(book1);  // Now Bob can borrow the book

    cout << endl;

    cout << "Available books after returning:" <<endl;
    library.listAvailableBooks();

    return 0;
}