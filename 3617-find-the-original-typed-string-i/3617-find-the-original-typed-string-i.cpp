class Solution {
public:
    int possibleStringCount(string word) {
        char prev = word[0];
        int count=0;
        for(int i=1;i<word.size();i++){
            if (prev==word[i]){
                count+=1;
            }
            prev=word[i];
        }
    return count+1;
    }
};