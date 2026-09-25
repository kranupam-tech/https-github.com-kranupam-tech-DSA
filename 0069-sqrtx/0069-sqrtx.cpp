class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;

        int start = 1, end = x / 2, ans = 0; // sqrt(x) ≤ x/2 for x ≥ 2
        while (start <= end) {
            int mid = start + (end - start) / 2;
            long long sq = (long long)mid * mid;

            if (sq == x) return mid;
            else if (sq < x) {
                ans = mid;       // store possible answer
                start = mid + 1; // move right
            } else {
                end = mid - 1;   // move left
            }
        }
        return ans;
    }
};
