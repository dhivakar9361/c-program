#include <stdio.h>
#include <string.h>

struct book {
    int book_no;
    char name[50];
    char author[50];
    int pages;
};

int count = 0;
struct book library[100];

void add_book() {
    int n, i;
    printf("How many records you want to add: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter book no.: ");
        scanf("%d", &library[count].book_no);
        printf("Enter book name: ");
        scanf("%s", library[count].name);
        printf("Enter author name: ");
        scanf("%s", library[count].author);
        printf("Enter number of pages: ");
        scanf("%d", &library[count].pages);
        count++;
    }
    printf("Records added successfully.\n");
}

void display_all_books() {
    int i;
    printf("Book No.\tBook Name\tAuthor\t\tPages\n");
    for (i = 0; i < count; i++) {
        printf("%d\t\t%s\t\t%s\t\t%d\n", library[i].book_no, library[i].name, library[i].author, library[i].pages);
    }
}

void list_books_by_author() {
    char author[50];
    int i, found = 0;
    printf("Enter author name: ");
    scanf("%s", author);
    printf("Book No.\tBook Name\tAuthor\t\tPages\n");
    for (i = 0; i < count; i++) {
        if (strcmp(author, library[i].author) == 0) {
            printf("%d\t\t%s\t\t%s\t\t%d\n", library[i].book_no, library[i].name, library[i].author, library[i].pages);
            found = 1;
        }
    }
    if (!found) {
        printf("No books found for author %s.\n", author);
    }
}

void count_books() {
    printf("The library has %d books.\n", count);
}

int main() {
    int choice;
    do {
        printf("\nPRESS 1. TO ADD BOOK DETAILS.\n");
        printf("PRESS 2. TO DISPLAY BOOK DETAILS.\n");
        printf("PRESS 3. TO LIST ALL BOOKS OF GIVEN AUTHOR.\n");
        printf("PRESS 4. TO COUNT NUMBER OF BOOKS.\n");
        printf("PRESS 5. TO EXIT.\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add_book();
                break;
            case 2:
                display_all_books();
                break;
            case 3:
                list_books_by_author();
                break;
            case 4:
                count_books();
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
    } while (choice != 5);
    return 0;
}

