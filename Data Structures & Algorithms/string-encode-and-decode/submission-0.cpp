class Solution {
public:

    string encode(vector<string>& strs) {
        string temp = "";
        for (string str: strs) {
            temp += to_string(str.size());
            temp += "#";
            temp += str;
        }
        return temp;
    }

    vector<string> decode(string s) {
        vector<string> res;
        for (int i=0; i<s.size(); i++) {
            string sz = "";
            while (i < s.size() && isdigit(s[i])) {
                sz += s[i];
                i++;
            }
            int siz = stoi(sz);
            res.push_back(s.substr(i+1, siz));
            i = i + siz;
        }
        return res;
    }
};
