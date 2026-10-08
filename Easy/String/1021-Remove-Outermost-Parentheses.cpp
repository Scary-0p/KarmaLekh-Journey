    string removeOuterParentheses(string s) {
        string res;
        int level = 0;

        for(char c : s){
            if(c == '('){
                if(level > 0){
                    res += c;
                }
                level++;
                else{
                    if(level > 0){
                    level--;
                        res += c;
                    }
                }
                return res;
            }
