#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Book {
private:
    int bookId;
    string bookName;
    string authorName;
    double price;
public:
    void get_details() {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cin.ignore(); // Clear newline from buffer
        cout << "Enter Book Name: ";
        getline(cin, bookName);
        cout << "Enter Author Name: ";
        getline(cin, authorName);
        cout << "Enter Book Price: ";
        cin >> price;
    }

    void print_details() {
        cout << left << setw(10) << bookId
             << setw(20) << bookName
             << setw(20) << authorName
             << setw(10) << fixed << setprecision(2) << price << endl;
    }

    double get_price() {
        return price;
    }
};

int main() {
    Book b[3];
    double totalPrice = 0;

    for(int i = 0; i < 3; i++) {
        cout << "Book " << i+1 << ":" << endl;
        b[i].get_details();
    }

    cout << "\nBook Details:\n";
    cout << left << setw(10) << "Book ID"
         << setw(20) << "Book Name"
         << setw(20) << "Author Name"
         << setw(10) << "Price" << endl;
    cout << string(60, '-') << endl;

    for(int i = 0; i < 3; i++) {
        b[i].print_details();
        totalPrice += b[i].get_price();
    }

    cout << "\nTotal Price of all books: " << fixed << setprecision(2) << totalPrice << endl;

    cin.get();
    cin.get();
    return 0;
}