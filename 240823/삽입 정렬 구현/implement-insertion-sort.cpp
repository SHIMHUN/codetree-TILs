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

    for(int i=1; i<n; i++){
        int j = i-1;
        int tmp = nums[i];
        while(j>=0 && nums[j]>tmp){
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = tmp;
    }

    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
    return 0;
}