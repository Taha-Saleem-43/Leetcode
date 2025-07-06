class FindSumPairs {
    vector<int> v1;
    vector<int> v2;
    unordered_map<int,int> mp;
public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2){
        v1=nums1;
        v2=nums2;
        for(int x : nums2)
            mp[x]++;
    }
    
    void add(int index, int val) {
      mp[v2[index]]--;
      v2[index]+=val;
      mp[v2[index]]++;  
    }
    
    int count(int tot) {
        int res = 0;
        for(int a : v1){
            if (mp.count(tot-a))
                res += mp[tot-a];
        }
        return res;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */