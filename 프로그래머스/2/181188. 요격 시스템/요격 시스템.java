import java.util.*;

class Solution {
    public int solution(int[][] targets) {
        int answer = 1;
        Arrays.sort(targets, Comparator.comparingInt(a -> a[0]));
        
        int[] inter = new int[]{-1, Integer.MAX_VALUE};
        
        for(int[] target:targets){
            inter = intersection(inter, target);
            if(inter == null){
                inter = target;
                answer++;
            }
        }
        return answer;
    }
    
    public int[] intersection(int[] s1, int[] s2){
        if(s1[1] > s2[0]){
            return new int[]{Math.max(s1[0],s2[0]),Math.min(s1[1],s2[1])};
        }
        return null;
    }
}

