using System;

public class Solution
{
    public int solution(int[,] sizes)
    {
        int answer = 0;
        int big = 0;
        int small = 0;
        for (int i = 0; i < sizes.Length / 2; i++)
        {
            big = Math.Max(big, Math.Max(sizes[i, 0], sizes[i, 1]));
            small = Math.Max(small, Math.Min(sizes[i, 0], sizes[i, 1]));

        }
        return big * small;
    }
}