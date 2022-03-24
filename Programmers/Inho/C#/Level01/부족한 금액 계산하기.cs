using System;

class Solution
{
    public long solution(int price, int money, int count)
    {
        long pay = 0;
        for (int i = 0; i < count; i++)
        {
            pay += (long)price * (i + 1);
        }
        if (pay < (long)money)
            return 0;
        return pay - (long)money;

    }
}