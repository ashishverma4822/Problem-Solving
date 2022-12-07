class Solution {
//Ashish Kumar Verma @ashishverma4822 @vashishk0602 @vashishk2003
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int ans1=-1,ans2=-1;
        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]==target){
                e=mid-1;
                ans1=mid;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        s=0;
        e=nums.size()-1;
        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]==target){
                s=mid+1;
                ans2=mid;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        vector<int>ans;
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};
