#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& nums1 , int m ,vector<int>& nums2 , int n){
    for (int i=0;i<nums1.size();i++) {
        nums1.erase(find(nums1.begin() , nums1.end(),0)); 
    }
    nums1.insert(nums1.end() ,nums2.begin(), nums2.end());
    sort(nums1.begin(),nums1.end());
}
int removeElement(vector<int>& nums, int val) {
    erase();
    return k; 
} 
int main(){
    vector<int> nums = {3,2,2,3};
    int val = 2;
    removeElement(nums,val);
    for (int i=0;i<nums.size();i++) {
        cout<<nums[i]<<" "; 
    }
}
