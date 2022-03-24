using System;
public class Solution {
    public int[] solution(long n) {
        int[] answer = new int[] {};
        char[] a = n.ToString().ToCharArray();
        System.Array.Reverse(a);
        answer = System.Array.ConvertAll(a, c => (int)System.Char.GetNumericValue(c));
        return answer;
    }
}

public class Solution {
    public int[] solution(long n) {
        string s = n.ToString();
        int[] answer = new int[s.Length];
        for(int i= 0; i<s.Length;i++){
            answer[i] = int.Parse(s[i].ToString());
        }
        Array.Reverse(answer);
        
        foreach(int i in answer){
            Console.Write(i);
        }
        return answer;
    }
}