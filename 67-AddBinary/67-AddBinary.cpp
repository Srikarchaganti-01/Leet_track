// Last updated: 4/1/2026, 7:39:27 PM
class Solution {
public:
    string addBinary(string a, string b) {
        int i = (int)a.size() - 1;
        int j = (int)b.size() - 1;
        int carry = 0;
        string v;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += (a[i--] - '0');
            if (j >= 0) sum += (b[j--] - '0');

            v.push_back(char('0' + (sum % 2)));
            carry = sum / 2;
        }

        reverse(v.begin(), v.end());
        return v;
    }
};