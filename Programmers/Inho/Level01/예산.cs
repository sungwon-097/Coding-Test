using System;
using System.Collections.Generic;

public class Solution
{
    public int solution(int[] d, int budget)
    {
        int answer = 0;
        Array.Sort(d);
        foreach (int a in d)
        {
            budget = budget - a;
            if (budget < 0)
                return answer;
            answer++;
        }
        return answer;
    }
}