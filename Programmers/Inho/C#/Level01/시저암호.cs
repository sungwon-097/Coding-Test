using System;
public class Solution {
    public string solution(string s, int n) {
        string answer = "";
        char[] a = new char[]{};
        a = s.ToCharArray();
        int temp;
        foreach(int ca in a){
            temp = ca+n;
            if(ca>='a'&& ca +n-'a'>25)
                temp -=26;
            else if(ca<'a' && ca>='A'&& ca+n-'A'>25)
                temp -=26;
            else if(ca == 32)
                temp = 32;
            answer +=(char)temp;
        }
        return answer;
    }
}