using System;
using System.Collections.Generic;

public class Solution
{
    public int solution(int n, int[] lost, int[] reserve)
    {
        int answer = 0;
        List<int> listLost = new List<int>(lost);
        List<int> listReserve = new List<int>(reserve);
        int howMany = listReserve.Count;
        foreach (int a in listLost)
        {
            for (int i = -1; i < 2; i++)
            {
                if (listReserve.Contains(a + i) && (a + i) != 0)
                {
                    listReserve.Remove(a + i);
                    break;
                }
            }
        }
        howMany -= listReserve.Count;
        answer = n - (lost.Length - howMany);
        return answer;
    }
}