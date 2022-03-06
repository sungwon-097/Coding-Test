using System;
public class Solution {
    public long solution(int a, int b) {
        long answer = 0;
        int big;
        int small;
        big = Math.Max(a, b);
        small = Math.Min(a, b);
        for(int i = small;i<=big;i++){
            answer +=i;
        }
        return answer;
    }
}