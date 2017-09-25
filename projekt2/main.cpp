#include <iostream>
#include <string>

using namespace std;

int main()
{
    string imie ="Jan" ;
    string nazwisko = "Kowalski";
    int rok_urodzenia = 2000;
    int aktualny_rok = 2017;

    cout<<"Witam, nazywam sie "<< imie <<" "<< nazwisko<<" i mam "<<aktualny_rok - rok_urodzenia<<" lat";
    return 0;
}
