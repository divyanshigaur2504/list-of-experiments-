#include <stdio.h>
struct Book {
    int book_id;
    char title[30];
    char author[30];
    float price;
};

void printBook(struct Book b) {
    printf("\nBook ID: %d\nTitle: %s\nAuthor: %s\nPrice: %.2f\n",
           b.book_id, b.title, b.author, b.price);
}

int main() {
    struct Book b1 = {101, "CProgramming", "Kernighan", 499.0};
    struct Book b2 = {102, "Algorithms", "CLRS", 999.0};

    printBook(b1);
    printBook(b2);
    return 0;
}
