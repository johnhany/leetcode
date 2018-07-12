#inclue <limits.h>

static auto x = [](){
    // turn off sync
    std::ios::sync_with_stdio(false);
    // untie in/out streams
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int reverse(int x) {
        int y = 0;
        int sign = x > 0 ? 1 : -1;
        x *= sign;
        int tmp, new_y;
        while (x) {
            tmp = x / 10;
            if (y > INT_MAX / 10)
                return 0;
            y *= 10;
            new_y = x - tmp * 10;
            if (y > INT_MAX - new_y)
                return 0;
            y += new_y;
            x = tmp;
        }
        return y * sign;
    }
};
