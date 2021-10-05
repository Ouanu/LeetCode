class Solution
{
public:
    string reverseLeftWords(string s, int n)
    {
        string c;
        for (int i = 0; i < n; i++)
        {
            c += s[i];
        }
        s.erase(s.begin(), s.begin() + n);
        s += c;
        return s;
    }
    // reverse(s.begin(), s.begin() + n);
    // reverse(s.begin() + n, s.end());
    // reverse(s.begin(), s.end());
    // return s;
};