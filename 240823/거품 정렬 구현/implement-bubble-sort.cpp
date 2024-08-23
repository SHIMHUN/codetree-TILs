#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }

    bool sorted;
    do{
        sorted = true;
        for(int i=0; i<n-1; i++){
            if(nums[i] > nums[i+1]){
                int tmp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = tmp;
                sorted = false;
            }
        }
    }
    while(sorted == false);

    vector<int>::iterator it;
    for(it = nums.begin(); it != nums.end(); it++){
        cout << *it << " ";
    }
    return 0;
}