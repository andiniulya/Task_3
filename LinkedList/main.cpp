#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include "list.h"

using namespace std;
int main()
{
    list l;
    createList(&l);
    int pil;
    infotype x,q;
    address p,c ;

    do
    {
        system("cls");
        cout <<"Aplikasi Buku"<<endl;
        cout <<"Menu Utama"<<endl;
        cout <<endl;
        cout <<"1. Insert Buku First      "                      <<endl;
        cout <<"2. Insert Buku Last       "                      <<endl;
        cout <<"3. Insert Buku After    "                 <<endl;
        cout <<"4. Delete Buku First      "                      <<endl;
        cout <<"5. Delete Buku Last       "                      <<endl;
         cout <<"6. Delete Buku After "                 <<endl;
        cout <<"7. Pencarian"                         <<endl;
        cout <<"8. View semua Buku  "                  <<endl;
        cout <<"0. Selesai"                           <<endl;
        cout<<"Masukan pilihan : ";
        cin>>pil;
        switch(pil)
        {
        case 1:
            //INSERTFIRST KOMANG
            break;
        case 2:
            //INSERTLAST KOMANG
            break;
        case 3:
            //INSERTAFTER KOMANG

        break;

        case 4:
            void deleteFirst (list &l, address p)
            {
                if(next(first(l))==nil)
                {
                    first(l)=nil;
                }
                else
                {
                    p=first(l);
                    first(l)=next(p);
                    next(p)=nil;
                }
            };
            break;

        case 5:
            void deleteLast (list &l, address p)
            {
                address q;
                while (next(p)!=nil)
                {
                q=p;
                p=next(p);
                }
                next(q)=nil;
                dealokasi(p);
            };
            break;

        case 6:
           void deleteafter(address q, address *p)
           {
            next(q)=next(*p);
            next(*p)=NULL;
            dealokasi(*p);
            };
            break;

        case 7:
           //SEARCHBUKU DZAKY
            break;

        case 8:

            system("cls");
            viewList(l);
            break;

        case 0:
            cout<<"Selesai"<<endl;
            break;
        default:
            cout<<"Pilihan Anda Salah"<<endl;
            getch();
        }
    }
    while (pil != 0);

}
