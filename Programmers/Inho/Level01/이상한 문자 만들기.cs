using System;

public class Solution
{
    public string solution(string s)
    {
        string answer = "";
        char[] div = new char[s.Length];

        div = s.ToCharArray();
        int count = 1;
        for (int i = 0; i < s.Length; i++)
        {
            if (count % 2 == 1)
            { // 홀수 - 대문자
                div[i] = Char.ToUpper(div[i]);
            }
            else // 짝수 - 소문자
                div[i] = char.ToLower(div[i]);
            count++;
            if (div[i] == ' ')
                count = 1;
        }
        Console.WriteLine();
        foreach (char a in div)
        {
            answer += a.ToString();
        }
        return answer;
    }
}