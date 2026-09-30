class Solution {
public:
    string reversePrefix(string word, char ch) {
        string temp="";
        int i=0;
        stack<char> st;
        while(word[i]!= ch && i<word.length()){
            st.push(word[i]);
            i++;
        }
        if(i>= word.length()) return word;
        st.push(word[i]);
        while(!st.empty()){
            temp+=st.top();
            st.pop();
        }
        word = word.substr(i+1,word.length()-1);
        string ans = temp + word;
        return ans;
    }
};