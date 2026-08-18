class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        // cout << s << endl;
        string news = "";
        for (char c: s) {
            if ((c>='a' && c<='z') || (c>='0' && c<='9')) {
                news += c;
            }
        }
        cout << news << endl;
        int n = news.size();
        int i=0, j=n-1;
        while (i <= j) {
            if (news[i] != news[j]) {
                return false;
            }
            i++; j--;
        }
        return true;
    }
};
