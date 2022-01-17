//https://programmers.co.kr/learn/courses/30/lessons/12909
#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char>bracket;
    for (int i : s) {
        if (i == '(') bracket.push(i);
        else
            if (!bracket.empty()&&bracket.top() != i) bracket.pop();
            else return false;
    }
    if (!bracket.empty()) return false;
    return answer;
}