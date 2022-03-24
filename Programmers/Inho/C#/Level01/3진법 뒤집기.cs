using System;
using System.Collections.Generic;
public class Solution
{
    public int solution(int n)
    {
        int answer = 0;
        List<int> three = new List<int>();
        while (n > 0)
        {
            three.Add(n % 3);
            n /= 3;
        }
        int[] temp = new int[three.Count];
        for (int i = 0; i < three.Count; i++)
        {
            temp[i] = three[i];
        }
        for (int i = 0; i < temp.Length; i++)
        {
            answer += temp[temp.Length - 1 - i] * (int)Math.Pow(3, i);
        }
        return answer;
    }
}