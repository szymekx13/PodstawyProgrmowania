#include <iostream>
using namespace std;

int main(){
    int a, b, k;
    int tab[20];
    int elementy = 0;
    cout<<"Podaj przedział liczbowy z zakresu liczb całkowitych: "<<endl;
    cin>>a>>b;
    cout<<"Podaj na jaką cyfrę mają kończyć się cyfry: "<<endl;
    cin>>k;
    if (k<0 || k>9){
        cout<<"Cyfra nie może byc poza tym zakresem: 0-9"<<endl;
        return 1;
    }
    for (int i = a; i <= b; i+10){
        if (i % 10 == k){
            tab[elementy] = i;
            elementy++;
            if (elementy > 20){
                cout<<"Zabrakło miejsca w tablicy. Kończę program..."<<endl;
                return 1;
            }
        }
    }
    cout<<"Podaje cyfry na tablicy: "<<endl;
    for (int i = 0; i<elementy; i++){
        cout<<tab[i]<<" ";
    }
    cout<<endl;
    return 0;
}