class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        string k;
        vector<pair<char,int>> v;
        
        for(auto x : s){
            mp[x]++;
        } 
        for(auto x : mp){
            v.push_back({x.first,x.second});
        }
        
        sort(v.begin(),v.end(),[] (auto &a, auto &b ){
            return a.second>b.second;
        });
        
        for(auto x : v){
            k+=string(x.second,x.first);
        }
    return k;   
    }
};