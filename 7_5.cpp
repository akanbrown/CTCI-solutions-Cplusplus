/**
Design the data structures for an online book reader system cplusplus
**/

//book.h
#ifndef ONLINE_BOOK_PERSON_H
#define ONLINE_BOOK_PERSON_H

#define BOOK_NAME 20
#define MAX_PAGES 1000

namespace READER
{
    class Book
    {
    public:
        Book(const char* name, int pages);
        ~Book();
        char* getBookName();
        int getNumPage();
        int* getCurrentPage();
        bool moveForwardPage();
        bool moveBackPage();
        bool setAvailability(bool val);
        bool getAvailability() const;
    private:
        char book_name[BOOK_NAME];
        int total_pages[MAX_PAGES];
        int *pcurrent_page;
        bool isavailable;
    };
}

#endif


//person.h
#ifndef ONLINE_PERSON_H
#define ONLINE_PERSON_H

#define NAMELENGTH 40

namespace READER
{
    class Person
    {
    public:
        Person (const char* first, const char* last);
        Person();
        ~Person();
        bool  setFirstName(const char* first_name);
        char* getFirstName()const;
        bool  setAccountNumber(int account_number);  // skipping getters from here on
        bool  isMember() const;
        int   memValidTill() const;

    private:
        char firstname[NAMELENGTH];
        char lastname[NAMELENGTH];
        int account_number;
        bool current_member;
        int membership_begin;   // should keep time struct - for simiplicity
        int valid_till;    // shortcut
    };
}

#endif

//library.h
#ifndef ONLINE_LIBRARY_H
#define ONLINE_LIBRARY_H

#define NAMELENGTH 40
#define MAX_BOOKS

namespace READER
{
    class Library
    {
    public:
        Library(int maxbooks);
        ~Library();
        int   getTotalBooks() const;
        int   totalCheckoutBooks() const;
        Book* checkout(char *name);
        bool  checkIn(Book *pbook);
        bool  isBookAvailable(Book *pbook);

    private:
        Book  book_catalog[MAX_BOOKS];
        int total_books;
        int total_checkout_books;
    };
}

#endif

//membership.h
#ifndef ONLINE_BOOK_MEMBERSHIP_H
#define ONLINE_BOOK_MEMBERSHIP_H

#define MAX_MEMBERS 100

#include "person.h"

namespace READER
{
    class Membership
    {
    public:
        Membership(Person *person);
        ~Membership();
        bool isMember(Person *Person);  // for simplicity have kept entire person
        bool isMember(int account_number);
        bool createMember(Person *Person);
        bool extendMembership(Person *Person);
        bool extendMembership(int account_number);
        int membershipValidTill(int account_number); //skipping option of Person

    private:
        Person memberslist[MAX_MEMBERS];
    };

}

#endif

//booktrans.h
#ifndef ONLINE_TRANSAC_H
#define ONLINE_TRANSAC_H

#include "book.h"
#include "booksearch.h"
#include "library.h"

namespace READER
{
    class BookTrans
    {
    public:
        BookTrans();
        bool checkOut(Book *pbook);
        bool checkIn(Book *pbook);

    private:
        Book *pbook;
        BookSearch *psearch;
        Library *pLibrary;
    };

}

#endif

//booksearch.h

#ifndef ONLINE_BOOK_SEARCH_H
#define ONLINE_BOOK_SEARCH_H

#include "library.h"
#include "book.h"

namespace READER
{
    class BookSearch
    {
    public:
        BookSearch(Library *plibrary);
        Book* searchBook(Book *pbook);

    private:
        Library *plibrary;
        Book *pbook;
    };
}

#endif
