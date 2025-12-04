#include <stdio.h>
struct Book {
    int book_id;
    char title[30];
    char author[30];
    float price;
};

void displayBook(struct Book b) {
    printf("\n--- Book Details ---\n");
    printf("ID: %d\nTitle: %s\nAuthor: %s\nPrice: %.2f\n",
           b.book_id, b.title, b.author, b.price);
}

int main() {
    struct Book myBook;
    printf("Enter Book ID: ");
    scanf("%d", &myBook.book_id);
    printf("Enter Title: ");
    scanf("%s", myBook.title);
    printf("Enter Author: ");
    scanf("%s", myBook.author);
    printf("Enter Price: ");
    scanf("%f", &myBook.price);

    displayBook(myBook);
    return 0;
}
