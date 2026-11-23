class Solution {
public:
    string minWindow(string s, string t) {
        int min=INT_MAX,l=0,r=0,start=-1,count=0;
        int arr[256]={0};
        for(int i=0;i<t.length();i++){
            arr[t[i]]++;
        }
        while(r<s.length()){
            if(arr[s[r]]>0) count++;
            arr[s[r]]--;
            while(count==t.length()){
                if(r-l+1<min){
                    min=(r-l+1);
                    start=l;
                }
                arr[s[l]]++;
                if(arr[s[l]]>0) count--;
                l++;
            }
            r++;
        }
        return start==-1?"":s.substr(start,min);
    }
};