#include <iostream>
#include <string>

using namespace std;

int main()
{
   string txt;
   cout<<"Podaj jakies slowo"<<endl;        
   cin>>txt;
   
   int s = txt.size() - 1;
   bool palindrom = true;
   
   for(int i=0; i < s/2 ;i++){
       if(txt.at(i)==txt.at(s-i)){
           palindrom = true;
       }else{
           palindrom = false;
       }
   }
   
   if (palindrom == true){
       cout<<"Tekst jest palindromem!";
   }else{
       cout<<"Tekst NIE jest palindromem!";
   }

    return 0;
}
