using System;
public class Solution {
    public bool solution(int x) {
        bool answer = true;
        int na = x%10;
        int moc = x/10;
        int ha = na;
        int now = x/10;
        while(moc!=0){
            na = now%10;
            moc = now/10;
            now = now/10;
            ha = ha+na;
        }
        ha += moc;
        if(x%ha==0){
            answer = true;
        } else
            answer = false;
        return answer;
    }
}