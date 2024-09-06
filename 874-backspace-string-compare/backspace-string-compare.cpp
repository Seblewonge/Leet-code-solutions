class Solution {
public:
    bool backspaceCompare(string s, string t) {
    
    return buildString(s) == buildString(t);
    }
    string buildString(string str) {
        stack<char> result;
        
        for (char ch : str) {
            if (ch == '#') {
                if (!result.empty()) {
                    result.pop();  
                }
            } else {
                result.push(ch); 
            }
        }
        string finalString;
        while (!result.empty()) {
            finalString += result.top();
            result.pop();
        }
        
        return finalString;
    }
};