using System;
public class Solution {
    public string solution(string phone_number) {
        string answer = "";
        answer = phone_number;
        string temp = "";
        for(int i=0;i<phone_number.Length-4;i++){
            temp +="*";
        }
        for(int i = phone_number.Length-4;i<phone_number.Length ; i++){
            temp +=phone_number[i];
        }
        answer = temp;
        return answer;
    }
}