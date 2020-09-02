class Solution 
{
public:
    bool isPalindrome(string s) 
    {
        int i = 0;
        int j = s.size() - 1;
        while(i < j)
        {
            if (!(is_alphanum_range(s[i])))
            {
                i++;
                continue;
            }

            if (!(is_alphanum_range(s[j])))
            {
                j--;
                continue;
            }

            if(!(compare_a_b(s[i],s[j])))
            {
                return false;
            }
            if((compare_a_b(s[i],s[j])))
            {
                i++;
                j--;
            }
        }
		return true;
    }
               
    
    bool compare_a_b(char a, char b)
    {
        if (b > a)
        {
            return compare_a_b(b, a);
        }
        if (a == b)
        {
            return true;
        }
        else
        {
            if((a-32 == b) && ((a >= 65 && a <=90) || (a >=97 && a<=122)) && ((b >= 65 && b <= 90) || (b >= 97 && b <= 122)))
			{
				return true;
			}
        }
		return false;  
    }
    
    bool is_alphanum_range(char c)
    {
        if((c >= 65 && c <=90) || (c >=97 && c<=122) || (c >= 48 && c <= 57))
		{
			return true;
        }
        return false;
    }
    
    
};
