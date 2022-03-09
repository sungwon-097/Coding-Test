using System;
public class Solution
{
    public string solution(string s)
    {
        string answer = "";
        int len = s.Length;
        if (len % 2 != 0) // odd
            answer += s[len / 2];
        else
        {
            answer += s[len / 2 - 1];
            answer += s[len / 2];
        }
        return answer;
    }
}