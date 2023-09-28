// Question: You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        

        for(int i=0;i<n;i++){
            nums1[m+i]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};