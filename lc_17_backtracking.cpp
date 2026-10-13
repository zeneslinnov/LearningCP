//Problem 17 LeetCode
//Backtracking

class Solution {
public:
    void backtracking(int index, string str_ans, vector<string>& ans, vector<string>& depth){
        if(index == depth.size()){
            ans.push_back(str_ans);
            return;
        }
        
        int N = depth[index].size();
        for(int i=0; i<N; i++){
            char temp = depth[index][i];
            str_ans += temp;//choose
            backtracking(index+1, str_ans, ans, depth);//recursion
            str_ans.pop_back();  
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> table = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        string str_ans = "";
        int index = 0;
        vector<string> ans = {};
        vector<string> depth = {};
        
        for(char x:digits){
            depth.push_back(table[x]);
        }
        
        backtracking(index, str_ans, ans, depth);
        return ans;
    }
};
