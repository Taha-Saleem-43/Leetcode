class Solution {
public:
    string removeDigit(string number, char digit) {
        vector<int> index;
        vector<string> results;
        string maxstring="";
        for(int x=0;x<number.size();x++){
            if (number[x]==digit) index.push_back(x);
        }
        if (index.size()==1){  
            number.erase(number.begin()+index[0]);
            return number;
        }

        for(int i=0;i<index.size();i++){
            string s=number;
            s.erase(s.begin()+index[i]);
            results.push_back(s);
        }

        for(string x : results){
            if (x>maxstring) maxstring=x;
        }
    return maxstring;
    }
};