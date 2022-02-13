using System;
public class Solution {
    public long[] solution(int n, int m) {
        long[] answer = new long[2] ;
        long nm = n*m;
        long lcm = n*m;
        long gcd;
        for(int i = 1 ; i<=m;i++){
            for(int j = 1; j<=n;j++){
                if(lcm < i*n)
                    continue;
                if(i*n==j*m)
                    lcm = i*n;
            }
        }
        Console.WriteLine("LCM은 {0}", lcm);
        gcd = nm/lcm;
        Console.WriteLine("GCD는 {0}",gcd);
        answer[0] = gcd;
        answer[1] = lcm;
        return answer;
    }
}