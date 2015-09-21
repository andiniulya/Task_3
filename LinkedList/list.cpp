#include "list.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//SEMANGAT !! Jangan lupa edit main.cppnya

infotype x;

void createList (list *l)
{
    (*l).first = NULL;
};

void dealokasi (address p)
{
    free(p);
};

address alokasi (infotype x)
{
    address p= new elmlist;
    p = (address) malloc (sizeof(elmlist));
    info(p)= x;
    next(p) = NULL;
    return p;
};

void insertFirst (list *l, address p)
{
    //Komang
    
};

void insertLast (list *l, address p)
{
  //Komang
  
};

void insertAfter (list *l, address p, address prec)
{
  //Komang
  
};

void deleteFirst (list *l, address p)
{
   //Ulya
};

void deleteLast (list *l, address p)
{
    //Ulya
};

void deleteAfter (list *l,address q, address p)
{
  //Ulya  
};

address searchBuku(list l, infotype x)
{
   //Dzaky
};


void input_data (infotype *x)
{
    cout <<"ID : ";
    cin>> (*x).ID;
    cout<<endl<<"Input Judul : ";
    cin>> (*x).judul;
    cout<<endl<<"Input Pengarang : ";
    cin>> (*x).pengarang;
    cout<<endl<<"Input Penerbit : ";
    cin>> (*x).penerbit;
    cout<<endl<<"Input Jenis : ";
    cin>> (*x).jenis;
    cout<<endl<<"Stock : ";
    cin>> (*x).stock;
};

void viewList (list l)
{
    address p;
    p = ((l).first);
    if (p==NULL)
    {
        cout<<"KOSONG";
        getch();
    }
    else
    {
        while (p != NULL)
        {
            cout << "ID Buku : " << (info(p)).ID<<endl;
            cout << " Judul : " << (info(p)).judul<<endl;
            cout << " Penerbit : " << (info(p)).penerbit<<endl;
            cout << " Pengarang : " << (info(p)).pengarang<<endl;
            cout << " Jenis : " << (info(p)).jenis<<endl;
            cout << " Stock : " << (info(p)).stock<<endl;
            cout<<endl;
            p = next(p);
        }
        getch();
    }
};


