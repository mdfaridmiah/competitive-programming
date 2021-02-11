class Solution {
public:
    int minimumLength(string s) {
        int i = 0, j = s.size() - 1;
        if(j == 0) return 1;
        while(true){
            string s1 = "", s2 = "";
            if(s[i] != s[j]) return j - i + 1;
           
            s1 += s[i];
            while(s[i] == s[i + 1] && i < j){
                i++;
            }
             
            s2 += s[j];
            while(s[j] == s[j - 1] && i < j){
                j--;
            }
            // cout<<i<<" "<<j<<endl;
            i++;
            j--;
            if(i == j) return 1;
            if(i > j) return 0;
        }
    }
};