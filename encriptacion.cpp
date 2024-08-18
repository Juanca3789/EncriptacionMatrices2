#include <iostream>
#include "min_matrizcuad.hpp"
#include "min_matrizrect.hpp"
using namespace std;

int main(){
    string to_encript;
    string passwd;
    getline(cin, to_encript);
    cout<<to_encript<<endl;
    getline(cin, passwd);
    cout<<passwd<<endl;
    min_matrizcuad *PSWD = new min_matrizcuad(passwd);
    min_matrizrect *WORD = new min_matrizrect(to_encript, PSWD->getRows());
    cout<<*WORD<<"\n\n";
    cout<<*PSWD;
    delete PSWD;
    delete WORD;
}