class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int digit=0;
        set<int> s;
        for(int i=0;i<digits.size();i++){
            for(int j=0;j<digits.size();j++){
                for(int k=0;k<digits.size();k++){
                    if (i!=j && j!=k && i!=k){
                        digit=digits[i]*100+digits[j]*10+digits[k];
                        if (digit%2==0 && digits[i]!=0)
                            s.insert(digit);
                    }
                }
            }
        }
    return vector<int> (s.begin(),s.end());
    }
};