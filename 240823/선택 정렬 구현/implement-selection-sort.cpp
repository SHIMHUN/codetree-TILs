#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> nums;
    int num;
    for(int i=0; i<n; i++){
        cin >> num;
        nums.push_back(num);
    }

    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(nums[min] > nums[j]){
                min = j;
            }
        }
        int tmp = nums[i];
        nums[i] = nums[min];
        nums[min] = tmp;
    }

    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
    return 0;
}