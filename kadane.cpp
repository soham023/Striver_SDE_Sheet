#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int max_Sum=nums[0];
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>max_Sum){
                max_Sum=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return max_Sum;
        
    }
int main(){
    vector <int> arr {-2,1,-3,4,-1,2,1,-5,4};
    int max_Sum= maxSubArray(arr);
    cout<<max_Sum;
    return 0;
}