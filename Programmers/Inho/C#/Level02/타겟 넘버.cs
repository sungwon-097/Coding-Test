using System;

public class Solution {
    public int solution(int[] numbers, int target) {
        int answer = 0;
        answer = findTarget(numbers,target, 0, 0);
        return answer;
    }
    
    public int findTarget(int[] numbers, int target, int cursor, int count){
        int res = 0;
        if(cursor==numbers.Length)
        {
            if(count==target)
                return 1;
            else
                return 0;
        }
        res += findTarget(numbers, target, cursor+1, count+numbers[cursor]);
        res += findTarget(numbers, target, cursor+1, count-numbers[cursor]);
        
        return res;
        
    }
}