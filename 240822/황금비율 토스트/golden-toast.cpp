#include <iostream>
#include <list>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    list<char> breads;
    for(int i=0; i<n; i++){
        char bread;
        cin >> bread;
        breads.push_back(bread);
    }
    
    list<char>::iterator it;
    it = breads.end();
    // cout << *it;
    for(int i; i<=m; i++){
        char cmd;
        cin >> cmd;
        if(cmd == 'L'){
            if(it == breads.begin()){
                continue;
            }
            else{
               it--; 
            }
        }
        else if(cmd == 'R'){
            if(it == breads.end()){
                continue;
            }
            else{
               it++; 
            }
        }
        else if(cmd == 'D'){
            if(it == breads.end()){
                continue;
            }
            else{
               it = breads.erase(it);
            }
        }
        else if(cmd == 'P'){
            char loc;
            cin >> loc;
            breads.insert(it, loc);
            // it++;
        }
    }

    for (const auto& bread : breads) {
        std::cout << bread;
    }
    return 0;
}