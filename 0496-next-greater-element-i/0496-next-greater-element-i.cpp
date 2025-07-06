class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int,int> mp;
        vector<int> result;
        for(int i=nums2.size()-1;i>=0;i--){
            int element = nums2[i];

            while(!s.empty() && s.top()<=element){
                s.pop();
            }

            if (s.empty()){
                mp[element]=-1;
            }
            else{
                mp[element]=s.top();
            }
            
            s.push(element);
        }
        for(int num : nums1){
            result.push_back(mp[num]);
        }
    return result;
    }
};