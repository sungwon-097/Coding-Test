using System;
public class Solution {
    public long[] solution(int x, int n) {
        long[] answer = new long[] {};
        Array.Resize(ref answer, n);
        long now = x;
        
        for(int i=0;i<n;i++){
            answer[i] = now;
            now += x;
        }
        return answer;
    }
}