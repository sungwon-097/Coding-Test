//https://programmers.co.kr/learn/courses/30/lessons/12919
#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int i=0;
    for(;i<seoul.size();i++)
        if(seoul[i]=="Kim"){
            break;
        }

    answer="김서방은 "+to_string(i)+"에 있다";

    cout << answer;
    return answer;
}