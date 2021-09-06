//https://programmers.co.kr/learn/courses/30/lessons/42840
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer={0,0,0};
    vector<int>max;
    vector<int> stu1={1,2,3,4,5}, stu2={2,1,2,3,2,4,2,5}, stu3={3,3,1,1,2,2,4,4,5,5};
    for(int i=0; i<answers.size(); i++){
        if(answers[i]==stu1[i%stu1.size()]){answer[0]++;}
        if(answers[i]==stu2[i%stu2.size()]){answer[1]++;}
        if(answers[i]==stu3[i%stu3.size()]){answer[2]++;}
    }
    int n=*(max_element(answer.begin(),answer.end()));
    for(int i=0; i<answer.size(); i++)
        if(n==answer[i]) max.push_back(i+1);
    return max;
}