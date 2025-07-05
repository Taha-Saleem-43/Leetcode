class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> v(501,0);
        int maxi = -1;
        for(int i=0;i<arr.size();i++){
            v[arr[i]]++;
        }
        for(int i=1;i<v.size();i++){
            if (v[i]==i){
                maxi=max(maxi,i);
            }
        }
    return maxi;
    }
};