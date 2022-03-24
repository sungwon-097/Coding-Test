using System;
public class Solution
{
    public bool solution(string s)
    {
        bool answer = true;
        if (s.Length != 4 && s.Length != 6)
            return false;
        foreach (char a in s)
        {
            if (!(a >= '0' && a <= '9'))
                return false;
        }
        return answer;
    }
}