//https://programmers.co.kr/learn/courses/30/lessons/12916
#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    cout << "Hello Cpp" << endl;
    int p=0,y=0;
    for(int i=0;i<s.size();i++)
        if(s[i]=='p'||s[i]=='P') p++;
        else if(s[i]=='y'||s[i]=='Y') y++;

    return p==y;
}