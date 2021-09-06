//https://programmers.co.kr/learn/courses/30/lessons/12925
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(string s) {
    int i=0, answer = 0;
    if(s[0]=='-'||s[0]=='+')i=1;
    for(;i<s.size();i++)
        answer+=(s[i]-48)*pow(10, s.size()-i-1);
    if(s[0]=='-') answer*=(-1);
    return answer;
}