//https://programmers.co.kr/learn/courses/30/lessons/12973
#include <string>
#include <stack>
using namespace std;

int solution(string s)
{
    stack<char>temp; temp.push(s[0]);
    for(int i=1; i<s.size(); i++)
        !temp.empty()&&temp.top()==s[i]?temp.pop():temp.push(s[i]);
    return temp.empty()?1:0;
}