class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    vector<int>ans;
    unordered_map<int,int>mp;
    unordered_set<int>s(nums2.begin(),nums2.end());
    for(auto i:nums1){
        mp[i]=1;
    }
   for(auto i:s){
        if(mp[i]==1)mp[i]=2;
        else 
            mp[i]=1;
   }
    for(auto i:nums3){
        if(mp[i]==2)mp[i]=3;
        else if(mp[i]==1)mp[i]=2;
    }
    for(auto i:mp){
        if(i.second>1)ans.push_back(i.first);
    }
    return  ans;
}
};