using System;

public class Solution
{
    public int solution(int left, int right)
    {
        int answer = 0;
        int num;
        for (int i = left; i <= right; i++)
        {
            num = 0;
            // TODO
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                    num++;
            }
            if (num % 2 == 0)
                answer += i;
            else
                answer -= i;
        }


        return answer;
    }
}