class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int sum= 0;
        for(int i= 0; i< operations.size();i++){
            if(operations[i]=="C"){
                st.pop();
            }
            else if(operations[i]=="D"){
                st.push(st.top()*2);
            }
            else if(operations[i]=="+"){
                int f =st.top();
                st.pop();
                int s = st.top();
                st.push(f);
                st.push(f+s);
            }
            else{
                st.push(stoi(operations[i]));
            }
        }
            
        while(!st.empty()){
                sum += st.top();
                st.pop();
            }
        return sum;
    }
};