class Solution {
public:
    string reversePrefix(string word, char ch) {
        string copy = word;
        string temp="";
        int i=0;
        stack<char> st;
        while(copy[i]!= ch && i<word.length()){
            st.push(copy[i]);
            i++;
        }
        if(i>= word.length()) return word;
        st.push(copy[i]);
        while(!st.empty()){
            temp+=st.top();
            st.pop();
        }
        copy = copy.substr(i+1,word.length()-1);
        string ans = temp + copy;
        return ans;
    }
};