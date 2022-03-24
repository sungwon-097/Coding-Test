public class Solution {
    public string solution(int num) {
        string answer = "";
        // num이 짝수면 Even
        if(num %2 == 0)
            return "Even";
        
        return "Odd";
    }
}