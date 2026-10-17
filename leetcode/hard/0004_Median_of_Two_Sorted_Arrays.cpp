class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int length = n+m;
        
        int left = 0;
        int right = 0;
        int counter = 0;
        int smaller = 0;
        int prev = 0;
            
        while(counter<= length/2){
            if(left>=n){
                prev = smaller;
                smaller = nums2[right];
                right++;
            }
            else if(right>=m){
                prev = smaller;
                smaller = nums1[left];
                left++;
            }            
            else if(nums1[left]<=nums2[right]){
                prev = smaller;
                smaller = nums1[left];
                left++;
            }
            else{
                prev = smaller;
                smaller = nums2[right];
                right++;
            }
            counter++;
        }
        
        if(length%2 == 1){
            return smaller;
        }
        else{
            return (smaller+prev)/2.0;
        }
}
};
