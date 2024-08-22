#include <iostream>
#include <string>
#include <list>
using namespace std;

int main() {
    int n, m;
    string s;
    cin >> n >> m;
    cin >> s;
    
    list<char> breads;
    for(int i=0; i<s.length(); i++){
        breads.push_back(s[i]);
    }
    
    list<char>::iterator it = breads.end();
    while(m--){
        char cmd;
        cin >> cmd;
        if(cmd == 'L'){
            if(it != breads.begin()){
               it--; 
            }
        }
        else if(cmd == 'R'){
            if(it != breads.end()){
               it++; 
            }
        }
        else if(cmd == 'D'){
            if(it != breads.end()){
               it = breads.erase(it);
            }
        }
        else if(cmd == 'P'){
            char loc;
            cin >> loc;
            breads.insert(it, loc);
        }
    }

    for (list<char>::iterator it = breads.begin(); it != breads.end(); it++) {
        cout << *it;
    }
    return 0;
}