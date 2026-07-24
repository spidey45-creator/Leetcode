class Solution {
    using ll=long long;
public:
    int trap(vector<int>& height) {
      int n=  height.size();
      int l=0;
      int r=n-1;
      int leftmx=0;
      int rightmx=0;
      int total=0;
      while(l<r)
      {leftmx=max(leftmx,height[l]);
      rightmx=max(rightmx,height[r]);
      if(leftmx<rightmx)
      {total+=leftmx-height[l];
      l++;}
      else{total+=rightmx-height[r];
      r--;}}
      return total;
        
    }
};