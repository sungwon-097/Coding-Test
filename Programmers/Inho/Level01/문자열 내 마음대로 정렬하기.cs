using System;
public class Solution {
    public string[] solution(string[] strings, int n) {
        string[] answer = new string[] {"a"};
        string temp;
        for(int i = 0; i<strings.Length;i++){
            for(int j=i;j<strings.Length;j++){
                if(strings[i][n] == strings[j][n])
                {
                    if(Compare(strings[i], strings[j])){
                        temp = strings[i];
                        strings[i] = strings[j];
                        strings[j] = temp;
                    }
                }
                else if(strings[i][n]>strings[j][n])
                {
                    temp = strings[i];
                    strings[i] = strings[j];
                    strings[j] = temp;
                }
            }
        }
        return strings;
    }
    public bool Compare(string str1, string str2){
        int max = Math.Max(str1.Length, str2.Length);
        for(int i =0 ;i<max;i++){
            if(str1[i]==str2[i])
                continue;
            if(str1[i]>str2[i]){
                return true;
            }else
                return false;
        }
        return true;
    }
}