using System;
public class Solution
{
    public int solution(string s)
    {
        int answer = 0;
        int i = 0;
        int temp = 0;
        while (i != (s.Length))
        {
            temp = 0;
            if (s[i] == '-')
            {
                for (int j = i + 1; j < (s.Length) && s[j] != '-' && s[j] != '+'; j++)
                {
                    temp -= (int)(s[j] - '0');
                    temp *= 10;
                    i++;
                }
                temp /= 10;
            }
            else
            {
                for (int j = i; j < (s.Length - 1) && s[j + 1] != '-' && s[j + 1] != '+'; j++)
                {
                    if (s[j] == '+')
                    {
                        i++;
                        continue;
                    }
                    temp += (int)(s[j] - '0');
                    temp *= 10;
                    i++;
                }
                temp += (s[i] - '0');
            }

            answer += temp;
            i++;
        }
        return answer;
    }
}