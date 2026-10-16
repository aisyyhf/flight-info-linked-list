#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

struct infotype {
    string flightNumber;
    string departureCity;
    string arrivalCity;
    string arrivalTime;
};

typedef struct elmList *adr;

struct elmList {
    infotype info;
    adr next;
};

struct List {
    adr first;
};

void Create_List(List &L);
adr New_Elemen(infotype data);
void Insert_First(List &L, adr p);
void Insert_Last(List &L, adr p);
void Insert_After(List &L, adr prec, adr p);
void Delete_First(List &L, adr &p);
void Delete_Last(List &L, adr &p);
void Delete_After(List &L, adr prec, adr &p);
void Show(List L);
void SortByFlightNumber(List &L);
adr SearchByFlightNumber(List L, string flightNumber);

#endif // SLL_H_INCLUDED
