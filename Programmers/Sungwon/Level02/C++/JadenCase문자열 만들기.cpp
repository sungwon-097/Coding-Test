//https://programmers.co.kr/learn/courses/30/lessons/12951
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool check=true;
    for(int i=0; i<s.size(); i++){
        if(check==true) {answer.push_back(toupper(s[i])); check=false;}
        else answer.push_back(tolower(s[i]));
        if(s[i]==' ') check=true;
    }
    return answer;
}