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
    int myAtoi(string str) {
        bool sign = true;
        bool has_num = false;
        int len = str.size();
        int rst = 0;
        int new_x;
        for (int i = 0; i < len; i++) {
            if (str[i] == ' ') {
                if (has_num)
                    break;
            } else if (str[i] == '+') {
                if (has_num)
                    break;
                has_num = true;
            } else if (str[i] == '-') {
                if (has_num)
                    break;
                has_num = true;
                sign = false;
            }else if (str[i] >= '0' && str[i] <= '9') {
                has_num = true;
                if (sign && rst > INT_MAX / 10)
                    return INT_MAX;
                if (!sign && rst > INT_MAX / 10 + 1)
                    return INT_MIN;
                rst *= 10;
                new_x = str[i] - '0';
                if (sign && rst > INT_MAX - new_x)
                    return INT_MAX;
                if (!sign && new_x > 0 && rst > INT_MAX - new_x + 1)
                    return INT_MIN;
                rst += new_x;
            } else
                break;
        }
        if (!sign)
            rst = -rst;
        return rst;
    }
};
