class Solution {
public:
    int minBitFlips(int start, int goal) {
        int set = start ^ goal; //doing xor for setting bits to be flipped
        int min = 0;
        while(set!=0){ //counting number of set bits
            set = set&(set-1);
            min++;
        }
        return min;
    }
};