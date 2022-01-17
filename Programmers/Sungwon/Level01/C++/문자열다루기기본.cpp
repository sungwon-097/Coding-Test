//https://programmers.co.kr/learn/courses/30/lessons/12918
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.size()==4||s.size()==6)
        for(int i=0; i<s.size();i++)
        {
            if(s[i]<'0'||s[i]>'9')
                answer=false;
           // cout << s[i] <<" ";
        }
    else
        answer=false;
    return answer;  
}