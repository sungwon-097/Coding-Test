using System;
using System.Collections.Generic;

class Solution
{
    public int solution(int[] nums)
    {
        int answer = 0;
        int sqrt;
        int prime;
        for (int i = 0; i < nums.Length - 2; i++)
        {
            for (int j = i + 1; j < nums.Length - 1; j++)
            {
                for (int k = j + 1; k < nums.Length; k++)
                {
                    prime = nums[i] + nums[j] + nums[k];
                    sqrt = (int)Math.Sqrt(prime);
                    for (int l = 2; l <= sqrt; l++)
                    {
                        if (prime % l == 0)
                        {
                            answer--;
                            break;
                        }
                    }
                    answer++;
                }
            }
        }
        return answer;
    }
}