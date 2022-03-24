using System;
public class Solution {
    public string solution(string s) {
        string answer = "";
        char[] temp = new char[] {};
        char tmp;
        temp = s.ToCharArray();
        for(int i = 0;i<temp.Length; i++){
            for(int j = i;j<temp.Length;j++){
                if(temp[i]<temp[j]){
                    tmp = temp[i];
                    temp[i] = temp[j];
                    temp[j] = tmp;
                }
            }
        }
        string big = "";
        foreach(char a in temp){
            if(a>='A'&&a<='Z'){
                big+=a;
            }
            else
                answer += a;
        }
        
        answer+=big;
        return answer;
    }
}