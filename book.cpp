#include <fstream>
#include <iostream>
#include <filesystem>
#include "book.h"

using namespace std;

//Constructor 
Book::Book(const string& title, const string& author, const string& isbn)
    : title(title), author(author), isbn(isbn) {}

//getters
string Book::getTitle() const {return title;}
string Book::getAuthor() const { return author;}
string Book::getISBN() const {return isbn;}
bool Book::getAvailability() const {return isAvailable;}
string Book::getBorrowerId() const {return borrowerId;}

//Setters
void Book::setTitle(const string& title){ this->title = title;}
void Book::setAuthor(const string& author) { this->author = author;}
void Book::setISBN(const string& isbn) {this->isbn = isbn;}
void Book::setAvailability(const bool available) {this->isAvailable= available;}
void Book::setBorrowerId(const string& id){this-> borrowerId = id;}


//checkout
void Book::checkOut(const string& borrowerId){
    this->setAvailability(false);
    this->setBorrowerId(borrowerId);
}
//return book
void Book::returnBook(){
    this->setAvailability(true);
    this->setBorrowerId(nullptr);
}

//toString
string Book::toString() const {
    string result;
    if(isAvailable){
        result = "Nom du livre: " + title + "\nAutheur: " + author +
                    "\nISBN: " + isbn + "\nDisponible: Oui";
    }else{
         result = "Nom du livre: " + title + "\nAutheur: " + author +
                    "\nISBN: " + isbn + "\nDisponible: Non" +
                    "\nLouer par: " + borrowerId;
    }

    return result;
}
//to file format
string toFileFormat(){

}
//fromFile Format
void fromFileFormat(const string& line){
    hi;
}
