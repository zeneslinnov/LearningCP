class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int length = n+m;
        
        int left = 0, right = 0;
        int smaller = 0, prev = 0;
            
        for(int i=0; i<=length/2; ++i){
            prev = smaller;
            
            if(left<n && (right>=m || nums1[left] <= nums2[right])){
                smaller = nums1[left++];
            }
            else{
                smaller = nums2[right++];
            }
        }
        
        return (length%2 == 1) ? smaller : (prev+smaller)/2.0;
}
};
