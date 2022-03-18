#include <iostream>
#include <string>


using namespace std;

string encode(string message, int key) {
  string wynik = "";
  int jump, i;

  for (int k = 0; k < key; k++) {
    if (k == key - 1) {
      jump = (key - 1) * 2;
    } else {
      jump = (key - (k + 1)) * 2;
    }
            
    i = k;
        
    while (i < message.length()) {
      wynik += message[i];
      i += jump;
    }
  }
  return wynik;
}

string decode(string message, int key) {
  string decoded = message;
  int j = 0;
  int jump, i;

  for (int k = 0; k < key; k++) {
    if (k == key - 1) {
      jump = (key - 1) * 2;
    } else {
      jump = (key - (k + 1)) * 2;
    }
        
    i = k;
        
    while (i < message.length()) {
      decoded[i] = message[j];
        j += 1;
        i += jump;
      }
  }
  return decoded;
}

int main() {
  string slowo = "";
  int klucz = 3;

  cout<<"Wpisz slowo do szyfrowania"<<endl;
  cin>>slowo;
    

  if( klucz > 0 ){
    cout << "Po szyfrowaniu wyjdzie: " << endl;     
    string zaszyfrowane = encode(slowo, klucz);
    cout << zaszyfrowane << endl; 
    cout << "Po odszyfrowaniu wyjdzie: " << endl; 
    string odszyfrowane = decode(zaszyfrowane, klucz);
    cout << odszyfrowane << endl; 
  }else{
    cout<<"Plot nie moze byc ujemny lub zerowy"<<endl;
  }

 return 0;
}
