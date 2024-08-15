#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    int N;
    vector<int> nums;

    cin >> N;

    for(int i=0; i<=N; i++){
        string input;
        getline(cin, input);

        stringstream ss(input);
        vector<string> words;
        string word;

        while(ss >> word){
            words.push_back(word);
        }

        if(words.size() == 1){
            if(words[0] == "size"){
                cout << nums.size() << "\n";
                // cout << "test" <<  "\n";
            }
            else if(words[0] == "pop_back"){
                nums.pop_back();
            }
        }
        else if(words.size() == 2){
            if(words[0] == "push_back"){
                nums.push_back(stoi(words[1]));
            }
            else if(words[0] == "get"){
                cout << nums[stoi(words[1])-1] << "\n";
            }
        }
    }
    return 0;
}