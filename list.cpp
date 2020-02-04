#include <iostream>
#include "list.h"

using namespace std;

address Q, R, S;

void createList(List &L){
    first(L)= NULL;
}

void clearList(List &L){
    first(L) = NULL;
}

address allocate(infotype x){
    address p = new elmList;
    info(p) = x;
    next(p) = NULL;

    return p;
}

address findLast(List L){
    Q = first(L);

    while (next(Q) != NULL)
    {
        Q = next(Q);
    }
    return Q;
}

address beforeLast(List L){
    address BL;
    Q = first(L);

    while (next(Q) != NULL)
    {
        BL = Q;
        Q = next(Q);
    }
    return BL;
}

address beforeElm(List L, infotype x){
    Q = first(L);
    
    while (next(Q) != NULL)
    {
        if (info(Q) == x)
        {
            return S;
        }
        S = Q;
        Q = next(Q);
    }
    return S;
}

bool searchInfo(List L, infotype x){
    Q = first(L);
    
    while (next(Q) != NULL)
    {
        if (info(Q) == x)
        {
            R = Q;
            return true;
        }
        Q = next(Q);
    }
    return false;
}

void insertFirst(List &L, address P){
    next(P) = first(L);
    first(L) = P;
}

void insertLast(List &L, address P){
    if (first(L) == NULL)
    {
        first(L) = P;
    }else{
    Q = findLast(L);
    next(Q) = P;
    }
}

void insertAfter(List &L, address P){
    next(P) = next(R);
    next(R) = P;
}

void printInfo(List L){
    address p = first(L);
    if (first(L) == NULL)
    {
        // DO NOTHING
    }else{
        while (p != NULL)
        {
            cout << info(p) << ", ";
            p = next(p);
        }
        cout << endl;
    }
}

void deleteFirst(List &L, address &P){
    if (first(L) != NULL)
    {
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}

void deleteLast(List &L, address &P){
    P = findLast(L);
    Q = beforeLast(L);

    next(Q) = NULL;
}

void deleteAfter(List &L, infotype x){
    beforeElm(L, x);
    next(S) = next(Q);
    next(Q) = NULL;
}