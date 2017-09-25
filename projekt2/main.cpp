#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie ;
    string nazwisko ;
    int rok_urodzenia;
    int aktualny_rok=2017;
    cout<< "podaj swoje imie"<<endl;
    cin>>imie;
    cout<< "podaj swoje nazwisko"<<endl;
    cin>>nazwisko;
    cout<< "podaj swoj rok urodzenia"<<endl;
    cin>>rok_urodzenia;


    cout<<"Witam, nazywam sie "<< imie <<" "<< nazwisko<<" i mam "<<aktualny_rok - rok_urodzenia<<" lat";
    return 0;
}
