#include "list_child.h"
#include"list_child.h"

using namespace std;
void createList(List_child &L)
{
    first(L) = NULL;
}

address_child allocate(infotype_child X)
{
    address_child P;
    P = new elmlist_child;
    info(P) = X.ID;
    info(P) = X.Nomor;
    info(P) = X.Tanggal;
    next(P) = NULL;
    return P;
}

void deallocate(address_child &P)
{
    delete P;
}

void insertFirst(List_child &L, infotype_child X)
{
    address_child P;
    P = allocate(X);
    if (first(L) = NULL){
        last(L) = P;
    }else{
        next(P) = first(L);
    }
    first(L)=P ;
}

void insertAfter(address_child &Prec, infotype_child X)
{
    address_child P;
    P = allocate(X);
    if (next(Prec) != NULL){
        next(P) = next(Prec);
    }
    next(Prec) = P;
}

void insertLast(List_child &L, infotype_child X)
{
    address_child Prec;
    Prec = first(L);
    if (first(L) = NULL){
        insertFirst(L, X);
    }else{
        while (next(Prec) != null){
           Prec = next(Prec)
        }
        next(Prec) = NULL;
        insertAfter(Prec, X);
    }
}

void deleteFirst(List_child &L, address_child &P)
{
   P = first(L);
   first(L) = next(first(L));
   next(P) = NULL;
}

void deleteLast(List_child &L, address_child &P)
{
    address_child Prec;
    Prec = first(L);
    if (next(Prec) = NULL){
        insertFirst(L, P);
    }else{
        while (next(next(Prec)) != NULL){
            Prec = next(Prec);
        }
        next(next(Prec) = NULL;
        deleteAfter(Prec, P);
}

void deleteAfter(List_child &L, address_child &P)
{
    address_child Prec;
    P = next(Prec);
    if (next(P) != NULL){
       next(Prec) = next(P);
    }else{
        next(Prec) = NULL;
    }
}

address_child searchNumber( List_child &L, infotype_child X){
    address_child P;
    P = first(L);
    do {
        if(info(P) == X) {
            return P;
        }
        P = next(P);
    } while(P != first(L) || info(P) != X);
    return NULL;
}

void printInfo(List_child L){
address_child P = first(L);
    if(first(L)!=NULL) {
        do {
            cout<<info(P)<<endl;
            printInfo(child(P));
            P = next(P);
        } while((P)!=first(L));
    }
}
