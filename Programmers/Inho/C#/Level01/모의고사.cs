using System;
using System.Collections.Generic;

public class Solution
{
    public int[] solution(int[] answers)
    {
        int[] answer = new int[3];
        // 1번 1 2 3 4 5
        int[] first = new int[] { 1, 2, 3, 4, 5 };
        // 2번 21 23 24 25
        int[] second = new int[] { 2, 1, 2, 3, 2, 4, 2, 5 };
        // 3번 33 11 22 44 55
        int[] third = new int[] { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
        for (int i = 0; i < answers.Length; i++)
        {
            if (answers[i] == first[i % first.Length])
            {
                answer[0]++;
            }
            if (answers[i] == second[i % second.Length])
            {
                answer[1]++;
            }
            if (answers[i] == third[i % third.Length])
            {
                answer[2]++;
            }
        }
        int max;
        max = Math.Max(answer[0], answer[1]);
        max = Math.Max(max, answer[2]);
        List<int> answerList = new List<int>();
        for (int i = 0; i < answer.Length; i++)
        {
            if (answer[i] == max)
                answerList.Add(i + 1);
        }
        return answer = answerList.ToArray();
    }
}