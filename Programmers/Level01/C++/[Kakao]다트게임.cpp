//https://programmers.co.kr/learn/courses/30/lessons/17682
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int>score;
    for(int i=0; i<dartResult.size(); i++){
        if(dartResult[i]=='1'&&dartResult[i+1]=='0'){
            score.push_back(10); i++;
        }else if(dartResult[i]>='0'&&dartResult[i]<='9'){
            score.push_back(dartResult[i]-('1'-1));
        }else
            switch(dartResult[i]){
                case 'S': score[score.size()-1]=pow(score[score.size()-1],1); break;
                case 'D': score[score.size()-1]=pow(score[score.size()-1],2); break;
                case 'T': score[score.size()-1]=pow(score[score.size()-1],3); break;
                case '#': score[score.size()-1]*=(-1); break;
                case '*': score[score.size()-1]*=2;score[score.size()-2]*=2;break;
            }
    }
    for(int i:score) answer+=i;
    return answer;
}