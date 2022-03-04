#include <iostream>
#include <string.h>
#include <vector>
#define RANGE 255
 
using namespace std;

void countingsort(string &tab){
    int max = tab[0];
    vector <int> count;
    
    for(int i = 0; i < tab.size(); i++){
        if(tab[i] > max){
            max = tab[i];
        }
    }
    
    for(int i = 0; i <= 26; i++){
        count.push_back(0);
    }
    
    for(int i = 0; i < tab.size(); i++){
        count[(int)(tab[i]) - 'a']++;
    }
    
    int cnt = 0;
    
    for(int i = 0; i < count.size(); i++){
        for(int j = 0; j < count[i]; j++){
            // cout << (char)(i + 'a') << " ";
            tab[cnt] = i + 'a';
            cnt++;
        }
    }
    
    // cout << endl;
}

int main()
{
    string sl1;
    string sl2;
    cout<<"Wpisz dwa slowa po enterze"<<endl;
    cin>>sl1>>sl2;
    
    if(sl1.size() != sl2.size()){
        cout<<"Nie jest anagramem!!!";
        return 1;
    }
    countingsort(sl1);
    countingsort(sl2);
    cout << sl1 << '\n';
    cout << sl2 << '\n';
    
    if (sl1 == sl2) {
        cout << "jest anagramem";
    } else {
        cout<<"Nie jest anagramem!!!";
    }
    
    return 0;
}
