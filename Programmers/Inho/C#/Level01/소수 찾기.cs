using System;
public class Solution
{
    public int solution(int n)
    {
        int answer = n - 1;
        int sqrt = 0;
        for (int i = 2; i <= n; i++)
        {
            sqrt = (int)Math.Sqrt(i);
            for (int j = 2; j <= sqrt; j++)
            {
                if (i % j == 0)
                {
                    answer--;
                    break;
                }
            }
        }
        return answer;
    }
}

// using System;
// public class Solution {
//     public int solution(int n) {
//         int answer = 0;
//         int sqrt = (int)Math.Sqrt(n);
//         bool[] isSosou = new bool[n+1];
//         for(int i = 0 ; i<isSosou.Length;i++){
//             isSosou[i] = true;
//         }
//         for(int i = 2;i<=n;i++){
//             for(int j = i;j<=n;j = j+i){
//                 if(i==j)
//                     continue;
//                 isSosou[j] = false;
//             }
//         }
//         int count = 0;
//         for(int i = 2;i<isSosou.Length;i++){
//             if(isSosou[i]==true)
//                 answer++;
//         }

//         return answer;
//     }
// }