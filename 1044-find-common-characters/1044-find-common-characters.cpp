class Solution {
public:
    void fillCount(int count[26], const string &word) {
        for (char ch : word) {
            count[ch - 'a']++;
        }
    }

    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        vector<string> res;
        
        if (n == 0) return res;

        int count[26] = {0};
        fillCount(count, words[0]);

        for (int i = 1; i < n; i++) {
            int temp[26] = {0};
            fillCount(temp, words[i]);

            for (int j = 0; j < 26; j++) {
                count[j] = min(count[j], temp[j]);
            }
        }

        for (int i = 0; i < 26; i++) {
            while (count[i] > 0) {
                res.push_back(string(1, i + 'a'));
                count[i]--;
            }
        }

        return res;
    }
};
