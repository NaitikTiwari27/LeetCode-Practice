class Solution {
public:
    int reverse(int x) {
        long long reve = 0;
        while (x != 0) {
            reve = reve * 10 + (x % 10);
            x /= 10;
        }
        if (reve > INT_MAX)
            return 0;
        if (reve < INT_MIN)
            return 0;
        return reve;
    }
};