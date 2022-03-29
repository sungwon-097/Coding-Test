using System;
using System.Collections.Generic;

public class Solution
{
    public int solution(int[] priorities, int location)
    {
        int answer = 0;
        Queue<KeyValuePair<int, int>> q = new Queue<KeyValuePair<int, int>>();
        for (int i = 0; i < priorities.Length; i++)
        {
            q.Enqueue(new KeyValuePair<int, int>(i, priorities[i]));
        }
        int max = 0;
        KeyValuePair<int, int> temp;
        while (true)
        {
            max = 0;
            foreach (KeyValuePair<int, int> tem in q)
                max = Math.Max(tem.Value, max);
            temp = q.Dequeue();
            if (temp.Value != max)
                q.Enqueue(temp);
            else if (temp.Key == location)
                return answer + 1;
            else
                answer++;
        }
        return answer;
    }
}