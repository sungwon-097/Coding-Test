public class Solution {
    public int solution(double num) {
        int answer = 0;
        int count = 0;
        while(true){
            if(num == 1){
                return count;
            }
            count ++;
            if(count > 500 )
                return -1;
            if(num %2 == 0){
                num /=2;
            }
            else{
                num = num*3 +1;
            }
        }
        return answer;
    }
}