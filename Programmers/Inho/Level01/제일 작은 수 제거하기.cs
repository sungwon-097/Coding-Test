using System;
using System.Linq;
using System.Collections.Generic;
public class Solution {
    public int[] solution(int[] arr) {
        int[] answer = new int[] {};
        if(arr.Length == 1){
            answer = new int[] {-1};
            return answer;
        }
        int small = arr[0];
        foreach(int i in arr){
            if(small>i)
                small = i;
        }
        answer = arr.Where(condition => condition!=small).ToArray();
        return answer;
    }
}