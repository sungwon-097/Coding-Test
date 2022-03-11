using System;
using System.Collections.Generic;
using System.Linq;

public class Solution
{
    public int[] solution(string[] id_list, string[] report, int k)
    {
        int[] answer = new int[id_list.Length];
        report = report.Distinct().ToArray();
        Dictionary<string, int> dict = new Dictionary<string, int>();
        foreach (string id in id_list)
        {
            dict.Add(id, 0);
        }
        string[] strings = new string[] { };
        foreach (string str in report)
        {
            strings = str.Split(" ");
            dict[strings[1]]++;
        }
        foreach (string str in report)
        {
            strings = str.Split(" ");
            if (dict[strings[1]] >= k)
            {
                int index = Array.IndexOf(id_list, strings[0]);
                answer[index]++;
            }

        }

        foreach (KeyValuePair<string, int> a in dict)
        {
            Console.WriteLine(a);
        }
        return answer;
    }
}