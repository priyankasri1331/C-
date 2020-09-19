class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> stack_s;
        map<char,char> bracket_map;
        char pop_val;
        
        bracket_map['}'] = '{';
        bracket_map[')'] = '(';
        bracket_map[']'] = '[';
        
        if(s.size() == 0)
            return true;
        
        if(s.size() == 1)
            return false;
        
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '{' || s[i] == '(' || s[i] == '[')
            {
                cout << s[i];
                stack_s.push(s[i]); 
            }
            
            if((s[i] == '}' || s[i] == ')' || s[i] == ']'))
            {
                //pop_val = stack_s.top();
                //cout << s[i] << endl;
                
                if(stack_s.size() == 0)
                {
                    return false;
                }
                if (stack_s.top() == bracket_map[s[i]])
                {
                    //cout << stack_s.top();
                    stack_s.pop();
                    continue;   
                }
                else
                    return false;
            }
            
        }
        if(stack_s.empty() )
            return true;  
        else
            return false;
    }
};
