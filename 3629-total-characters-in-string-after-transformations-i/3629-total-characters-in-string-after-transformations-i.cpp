class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
         int MOD = 1000000007;
        long long count=0;
        vector<int> freq(26,0);
        for(char x : s) freq[x-'a']++;

        for(int epo=1;epo<=t;epo++){
            vector<int> temp(26,0);
            for(int i=0;i<freq.size();i++){
                char c = i +'a';
                int freqq = freq[i];
                if (c!='z'){
                    temp[(c+1)-'a']=(temp[(c+1)-'a']+freqq) % MOD;
                }
                else{
                    temp[0]=(temp[0]+freqq) % MOD;  // a
                    temp[1]=(temp[1]+freqq) % MOD;  // b
                }
            }
            freq=temp;
        }

        for(int k=0;k<freq.size();k++){
            if (freq[k]!=0)
                count+=freq[k];
        }
        
        return count % MOD;
    }
};

        //Brute Force approach
        // for(char x : s) v.push_back(x);
        // for(int i=0;i<t;i++){
        //     vector<char> temp;
        //     for(int j=0;j<v.size();j++){
        //         if (v[j]=='z'){
        //             temp.push_back('a');
        //             temp.push_back('b');
        //         }
        //         else{
        //             int x = v[j];
        //             temp.push_back(char(x+1));
        //         }
        //    }
        //     v=temp;
        // }