class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0;i< s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(st.top()==s[i]){
                st.pop();
            } 
            else{
                st.push(s[i]);
            }
        }
        string toReturn = "";
        while(!st.empty()){
            toReturn = st.top() + toReturn;
            st.pop();
        }
       return toReturn; 
    }
};