using System;
using System.Collections.Generic;
public class Solution
{
    public int[] solution(int[] arr, int divisor)
    {
        int[] answer = new int[] { };
        List<int> ans = new List<int>();
        foreach (int a in arr)
        {
            if (a % divisor == 0)
            {
                Array.Resize(ref answer, answer.Length + 1);
                answer[answer.Length - 1] = a;
            }
        }
        Array.Sort(answer);
        if (answer.Length == 0)
            return new int[] { -1 };
        return answer;
    }
}