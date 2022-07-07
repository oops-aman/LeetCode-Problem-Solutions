class Solution {
public:
    int fib(int n) {
        int a = 0, b = 1;
        int f = 0;
        if(n == 0)
            return a;
        else if(n == 1)
            return b;
        else if(n == 2)
            return b;
        else {
            for(int i = 1; i < n; i++) {
                f = a + b;
                a = b;
                b = f;
            }
        }
        return f;
    }
};