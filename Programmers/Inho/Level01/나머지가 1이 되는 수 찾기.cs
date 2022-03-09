using System;

public class Solution
{
    public int solution(int n)
    {
        int answer = 0;
        int big = n - 1;
        int sqrt = (int)Math.Sqrt(n - 1);
        for (int i = 2; i <= sqrt; i++)
        {
            if (big % i == 0)
                return i;
        }

        return big;
    }
}