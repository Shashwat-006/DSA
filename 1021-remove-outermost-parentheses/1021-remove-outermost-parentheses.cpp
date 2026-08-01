class Solution {
public:
    string removeOuterParentheses(string s) {
        int left=0,right=0,lCount=0;
        vector<int> nums;
        auto it=s.begin();
        int i=0;
        while(it!=s.end()){
            if(lCount==0 && s[i]=='(') left=i;
            if(s[i]=='(') lCount++;
            if(s[i]==')') lCount--;
            if(lCount==0 && s[i]==')'){
                s.erase(left,1);
                s.erase(i-1,1);   
                i--,it--;;
            }else{
                i++,it++;
            }
        }
        return s;
    }
};