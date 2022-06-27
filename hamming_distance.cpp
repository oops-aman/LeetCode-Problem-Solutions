class Solution {
public:
    int hammingDistance(int x, int y) {
        int i = 0, count = 0;
        while(i < 32) {
            int flag1 = 1 << i++;
            int flag2 = x & flag1;
            int flag3 = y & flag1;
            if(flag2 != flag3)
                count++;
        }
        return count;
    }
};