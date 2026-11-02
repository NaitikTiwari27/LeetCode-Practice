class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.size() != t.size()){ return false; }

        char indexS[200] = {'\0'};
        char indexT[200] = {'\0'};
        for(int i=0; i<s.size(); i++){

            if(indexS[static_cast<unsigned char>(s[i])] == '\0'){
                indexS[static_cast<unsigned char>(s[i])] = t[i];
            }

            if(indexT[static_cast<unsigned char>(t[i])] == '\0'){
                indexT[static_cast<unsigned char>(t[i])] = s[i];
            }

            if(indexS[static_cast<unsigned char>(s[i])] != t[i] || indexT[static_cast<unsigned char>(t[i])] != s[i]){
                return false;
            }
        }

        return true;
    }
};