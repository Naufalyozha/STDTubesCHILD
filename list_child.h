#ifndef LIST_CHILD_H_INCLUDED
#define LIST_CHILD_H_INCLUDED
#include <iostream>
using namespace std;

#define next(P) P->next
#define first(L) L.first
#define last(L) L.last
#define info(P) P->info

#include <iostream>
using namespace std;

#define next(P) P->next
#define first(L) L.first
#define last(L) L.last
#define info(P) P->info

typedef struct elmlist_child*address_child;
typedef int infotype_child;

struct elmlist_child{
	infotype_child info;
	address_child next;
};

struct List_child{
	address_child first;
	address_child last;
};

void createList_child(List_child &L);
void insertFirst_child(List_child &L, infotype_child X);
void insertAfter_child(address_child &Prec, infotype_child X);
void insertLast_child(List_child &L, infotype_child X);

void deleteFirst_child(List_child &L, address_child &P);
void deleteAfter_child(List_child &L, address_child &P);
void deleteLast_child(List_child &L, address_child &P);

void deallocate_child(address_child &P);
address_child allocate_child(infotype_child X);
void printInfo_child(List_child L);
address_child findElm_child(List_child &L, string X)


#endif // MYCHILD_H_INCLUDED
