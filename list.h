#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;
typedef int infotype;
typedef struct elmList *address;

struct elmList
{
    infotype info;
    address next;
};

struct List
{
    address first;
};

void createList(List &L);
void clearList(List &L);
void printInfo(List L);
address allocate(infotype x);
address findLast(List L);
address beforeLast(List L);
address beforeElm(List L, infotype x);
bool searchInfo(List L, infotype x);

void insertFirst(List &L, address P);
void insertLast(List &L, address P);
void insertAfter(List &L, address P);

void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(List &L, infotype x);

#endif // LIST_H_INCLUDED
