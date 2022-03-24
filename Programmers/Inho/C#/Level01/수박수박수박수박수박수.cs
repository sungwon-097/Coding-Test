public class Solution
{
    public string solution(int n)
    {
        string answer = "";
        string s1 = "수";
        string s2 = "박";
        for (int i = 0; i < n; i++)
        {
            answer += (i % 2 == 0) ? s1 : s2;
        }
        return answer;
    }
}