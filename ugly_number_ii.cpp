class Solution {
public:
    int nthUglyNumber(int n) {
        if(n == 1 or n == 2 or n ==3 or n == 4 or n == 5)
        return n;

    set<long long> s;
    s.insert(1);
    n--;

    while(n != 0) {
        auto i = s.begin();
        long long x = *i;

        s.erase(i);

        s.insert(x*2);
        s.insert(x*3);
        s.insert(x*5);
        n--;
    }
    return *s.begin();
    }
};