class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int arr[2]={0,0};
        bool ans=true;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5) arr[0]++;
            else if(bills[i]==10){
                arr[1]++;
                if(arr[0]<1){
                    ans=false;
                    break;
                }
                arr[0]--;
            }
            else{
                if(arr[0]<1){
                    ans=false;
                    break;
                }
                else if(arr[1]<1 && arr[0]<3){
                    ans=false;
                    break;
                }
                if(arr[1]<1){
                    arr[0]-=3;
                }
                else{
                    arr[1]--,arr[0]--;
                }
            }
        }
        return ans;
    }
};