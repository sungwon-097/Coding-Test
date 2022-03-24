using System;

public class Solution
{
    public int[] solution(int[] lottos, int[] win_nums)
    {
        int rank = lottos.Length + 1;
        int zeroNum = 0;
        int sameNum = 0;
        int maxRank = 0;
        int minRank = 0;
        foreach (int a in lottos)
        {
            if (a == 0)
                zeroNum++;
            foreach (int b in win_nums)
            {
                if (a == b)
                    sameNum++;
            }
        }
        minRank = rank - sameNum;
        maxRank = minRank - zeroNum;
        if (sameNum <= 1)
            minRank = 6;
        if (sameNum + zeroNum <= 1)
            maxRank = 6;
        return new int[] { maxRank, minRank };
    }
}