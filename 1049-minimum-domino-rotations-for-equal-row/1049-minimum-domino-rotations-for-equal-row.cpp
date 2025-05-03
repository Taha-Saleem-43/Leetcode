class Solution {
public:
    static int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n=tops.size();
        int m=bottoms.size();
        if (n!=m) return -1;
        vector<int> T(7,0);
        vector<int> B(7,0);
        vector<int> C(7,0);
        for(int i=0;i<n;i++){
            T[tops[i]]++;
            B[bottoms[i]]++;
            C[tops[i]]+=(tops[i]==bottoms[i]);
        }
        int ans=INT_MAX;
        for(int x=1;x<=6;x++){
            if (T[x]+B[x]-C[x]==n)
                ans=min(n-T[x],n-B[x]);
        }
        if (ans==INT_MAX) return -1;
        return ans;
    }
};