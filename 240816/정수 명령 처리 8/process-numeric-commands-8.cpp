#include <iostream>
#include <list>
using namespace std;

int main() {
    int N;
    cin >> N;

    list<int> nums;

    for(int i=0; i<=N; i++){
        string cmd;
        int num;
        cin >> cmd;

        if(cmd == "push_front"){
            cin >> num;
            nums.push_front(num);
        }
        else if(cmd == "push_back"){
            cin >> num;
            nums.push_back(num);
        }
        else if(cmd == "pop_front"){
            cout << nums.front() << "\n";
            nums.pop_front();
        }
        else if(cmd == "pop_back"){
            cout << nums.back() << "\n";
            nums.pop_back();
        }
        else if(cmd == "size"){
            cout << nums.size() << "\n";
        }
        else if(cmd == "empty"){
            cout << nums.empty() << "\n";
        }
        else if(cmd == "front"){
            cout << nums.front() << "\n";
        }
        else if(cmd == "back"){
            cout << nums.back() << "\n";
        }
    }
    return 0;
}