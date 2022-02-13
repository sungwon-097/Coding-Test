using System.Collections.Generic;
using System;
public class Solution {
    public long solution(long n) {
        long answer = 0;
        
        List<long> li = new List<long>();
        while((long)n/10 !=0){
            li.Add((long)n%10);
            //Console.WriteLine(n%10);
            n /= 10;
        }
        li.Add((long)n%10);
        li.Sort();
        foreach(int i in li)
            Console.WriteLine(i);
        int count = 0;
        foreach(int i in li){
            answer += i*(long)Math.Pow(10,count);
            count ++;
            //Console.WriteLine(answer);
        }
        return answer;
    }
}
public class Solution {
    public long solution(long n) {
        long answer = 0;
        string s = n.ToString();
        int[] arr= new int[s.Length];
        for(int i = 0;i<arr.Length;i++){
            arr[i] = int.Parse(s[i].ToString());
        }
        Array.Sort(arr);
        Array.Reverse(arr);
        s = "";
        for(int i =0 ; i<arr.Length;i++){
            s += arr[i];
        }
        Console.WriteLine(s);
        answer = long.Parse(s);
        return answer;
    }
}