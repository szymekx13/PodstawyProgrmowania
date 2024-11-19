#include <iostream>
using namespace std;

int main(){
    int poczatek;
    int tablica[20];
    int elementy = 0;
    cout<<"Podaj liczbę początkową"<<endl;
    cin>>poczatek;
    cout<<endl;
    for (int i = poczatek; elementy<20; i++){
        if (i % 4 == 0 && i % 5 == 0 && i % 9 == 0){
            tablica[elementy] = i;
            elementy++;
        }
    }
    cout<<"Wszystie liczby na tablicy: "<<endl;
    for (int i=0; i<elementy; i++){
        cout<<tablica[i]<<" ";
    }
cout<<endl;
return 0;
}