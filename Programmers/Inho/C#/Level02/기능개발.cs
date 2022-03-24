using System;
using System.Collections.Generic;

public class Solution
{
    public int[] solution(int[] progresses, int[] speeds)
    {
        int[] answer = new int[] { };
        int cursor = 0;
        int before = cursor;
        List<int> list = new List<int>();
        while (true)
        {
            if (progresses[cursor] >= 100)
            {
                before = cursor;
                while (true)
                {
                    cursor++;
                    if (cursor >= progresses.Length || progresses[cursor] < 100)
                        break;
                }
                list.Add(cursor - before);
            }
            for (int i = 0; i < progresses.Length; i++)
            {
                progresses[i] += speeds[i];
            }
            if (cursor >= progresses.Length)
                break;
        }
        foreach (int a in list)
        {
            Console.Write(a + " ");
        }
        return answer = list.ToArray();
    }
}