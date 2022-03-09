using System;
public class Solution
{
    public string solution(int a, int b)
    {
        string answer = "";
        int days = (a - 1) * 31 + b;
        switch (a)
        {
            case 12:
                days -= 6;
                break;
            case 11:
                days -= 5;
                break;
            case 10:
                days -= 5;
                break;
            case 9:
                days -= 4;
                break;
            case 8:
                days -= 4;
                break;
            case 7:
                days -= 4;
                break;
            case 6:
                days -= 3;
                break;
            case 5:
                days -= 3;
                break;
            case 4:
                days -= 2;
                break;
            case 3:
                days -= 2;
                break;
        }
        days = days % 7;
        switch (days)
        {
            case 1:
                return answer = "FRI";
            case 2:
                return answer = "SAT";
            case 3:
                return answer = "SUN";
            case 4:
                return answer = "MON";
            case 5:
                return answer = "TUE";
            case 6:
                return answer = "WED";
            case 0:
                return answer = "THU";
        }

        return answer;
    }
}