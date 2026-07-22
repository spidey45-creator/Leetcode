class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> c;

        for(int i = 0; i < nums1.size(); i++) {
            c.push_back(nums1[i]);
        }

        for(int i = 0; i < nums2.size(); i++) {
            c.push_back(nums2[i]);
        }
        int n=c.size();
        
        sort(c.begin(),c.end());
        if(n%2==0){
            return{(c[n/2]+c[(n/2)-1])/2.0};
        }
        else{return c[n/2];}
        
    }
};