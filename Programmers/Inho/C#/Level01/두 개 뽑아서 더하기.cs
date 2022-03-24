using System;
using System.Collections.Generic;
using System.Linq;

public class Solution
{
    public int[] solution(int[] numbers)
    {
        int[] answer = new int[] { };
        List<int> plus = new List<int>();
        for (int i = 0; i < numbers.Length; i++)
        {
            for (int j = i + 1; j < numbers.Length; j++)
            {
                plus.Add(numbers[i] + numbers[j]);
            }
        }
        plus = plus.Distinct().ToList();
        plus.Sort();
        answer = plus.ToArray();

        return answer;
    }
}