using System;
using System.Collections.Generic;
using System.Linq;
public class Solution
{
    public int[] solution(int[] array, int[,] commands)
    {
        int[] answer = new int[] { };
        int[] answerArr = new int[] { };
        List<int> temp = new List<int>();
        List<int> answerList = new List<int>();
        for (int i = 0; i < commands.Length / 3; i++)
        {
            temp.Clear();
            for (int j = commands[i, 0]; j <= commands[i, 1]; j++)
            {
                temp.Add(array[j - 1]);
            }
            temp.Sort();
            answerList.Add(temp.ElementAt(commands[i, 2] - 1));
        }
        return answer = answerList.ToArray();
    }
}