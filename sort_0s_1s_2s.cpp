// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.
// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// Example 2:

// Input: nums = [2,0,1]
// Output: [0,1,2]

// Constraints:

// n == nums.length
// 1 <= n <= 300
// nums[i] is either 0, 1, or 2.


#include <bits/stdc++.h>
using namespace std;
//BETTER APPROACH
// void sortColorsBETTER(vector<int>& nums) {
        
//         int a=0,b=0,c=0; 
//         // a for 0s, b for 1s, c for 2s
        
//         for(int i=0;i<nums.size();i++)  
//         {
//             if(nums[i]==0){
//                 a++;
//             }
//             if(nums[i]==1){
//                 b++;
//             }
//             if(nums[i]==2){
//                 c++;
//             }
            
//         }
//         for(int i=0; i<a; i++){
//             nums[i]=0;
//         }
//         for(int i=a; i<a+b; i++){
//             nums[i]=1;
//         }
//         for(int i=a+b; i<a+b+c; i++){
//             nums[i]=2;
//         }
// }

// OPTIMAL APPROACH
void sortColorsOPTIMAL(vector<int>& nums) {
        int lo = 0; 
        int hi = nums.size() - 1; 
        int mid = 0; 

        while (mid <= hi) { 
            switch (nums[mid]) { 

            // If the element is 0 
            case 0: 
                swap(nums[lo++], nums[mid++]); 
                break; 

            // If the element is 1 . 
            case 1: 
                mid++; 
                break; 

            // If the element is 2 
            case 2: 
                swap(nums[mid], nums[hi--]); 
                break; 
            }
        }
         
    }
int main() {
    
    int n;
    cin>>n;
    int input;
    vector <int> arr;
    
    for (int i = 0; i < n; i++){
        cin>>input;
        arr.push_back(input);
    }
      sortColorsOPTIMAL(arr);
    for(int i=0; i<arr.size();i++){
        cout<<arr[i];
        cout<<' ';
    }
    return 0;
}