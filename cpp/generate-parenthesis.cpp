class Solution {
public:
    vector<string>result;
    void paranthesis(int n, int open, int close, string str) {   
        if(close == n){ 
            result.push_back(str);
            return; 
        } 
        else{ 
            if(open > close) paranthesis(n, open, close+1,str+')'); 
            if(open < n) paranthesis(n, open+1, close,str+'('); 
        } 
  }
    
    vector<string> generateParenthesis(int n) {
        paranthesis(n, 0, 0, "");
        return result;
    }
};
