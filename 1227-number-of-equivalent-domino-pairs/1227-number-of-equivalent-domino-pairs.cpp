class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int count=0;
        vector<vector<int>> v(10, vector<int>(10, 0));
        for(int i=0;i<dominoes.size();i++){
            int a=dominoes[i][0];
            int b=dominoes[i][1];
            if (a<b) v[a][b]++;
            else v[b][a]++;
        }
        for(int i=0;i<v.size();i++){
            for(int j=i;j<v.size();j++){
                int n=v[i][j];
                if (n>1){
                    count+=n*(n-1)/2;
                }
            }   
        }
        return count;
    }
};