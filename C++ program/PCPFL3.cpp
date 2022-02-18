#include <iostream>
#include <cstring>

using namespace std;


class Media {
    public:
       
        int id, yearOfPublish;


        Media(int id, int yearOfPublish) {
            this->id = id;
            this->yearOfPublish = yearOfPublish;
        }


        virtual void display() {}

};


class Book : public Media {
    public:

        string title;
        float price;
        int pages;

        Book(int id, int yearOfPublish ,string title, float price, int pages)
        :Media(id, yearOfPublish) {
            this->title = title;
            this->price = price;
            this->pages = pages;
        }

  
        virtual void display() {
            cout << "Book's ID :  " << this->id << endl;
            cout << "Book's Year of publish :  " << this->yearOfPublish << endl;
            cout << "Book's title' :  " << this->title << endl;
            cout << "Book's price :  " << this->price << " rs" << endl;
            cout << "Number of pages in book :  " << this->pages << " pages" << endl;

        }
};


class Tape : public Media {
    public:

        string title;
        float price;
        float time;

        Tape (int id, int yearOfPublish, string title, float price, float time)
        :Media(id, yearOfPublish) {
            this->title = title;
            this->price = price;
            this->time  = time;
        }

  
        virtual void display() {
            cout << "Tape's ID :  " << this->id << endl;
            cout << "Tape's Year of publish :  " << this->yearOfPublish << endl;
            cout << "Tape's title' :  " << this->title << endl;
            cout << "Tape's price  :  " << this->price << " rs" << endl;
            cout << "Tape's length :  " << this->time << " hours" << endl;

        }
};

int main() {
    Media *myBook = new Book(1, 1996, "The Monk Who Sold His Ferrari", 267, 198);
    myBook->display();
    
    cout << "\n" << endl;

  
    Media *myTape = new Tape(2, 1997, "Harry Potter and the Sorcerer's Stone", 1000, 8.34);
    myTape->display();
}