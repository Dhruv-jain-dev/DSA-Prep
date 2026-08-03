class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        int len=0;

    // Extract word by word
    while (ss >> word) {
        len=word.length();
    }
    return len;
    }
};