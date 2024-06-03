class Solution {
public:
    int appendCharacters(string s, string t) {
        int si = 0, ti = 0, a = 0;

        while (ti < t.length()) {
            if (si == s.length()) {
                a += t.length() - ti;
                break;
            }
            if (s[si] == t[ti]) {
                ti++;
            }
            si++;
        }

        return a;
    }
};