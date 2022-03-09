using System;

public class Solution
{
    public int solution(int[] numbers)
    {
        int answer = -1;
        Array.Sort(numbers);
        int count = 0;
        foreach (int a in numbers)
        {
            answer += a;
        }
        return 44 - answer;
    }
}