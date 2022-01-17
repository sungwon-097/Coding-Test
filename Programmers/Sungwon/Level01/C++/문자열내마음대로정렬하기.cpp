//https://programmers.co.kr/learn/courses/30/lessons/12915
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int N;
bool Compare(string str1, string str2){
    if(str1[N]!=str2[N])
    {
        return str1[N]<str2[N];
    }
    else{
        return str1<str2;
    }
}
vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    N=n;
    sort(strings.begin(),strings.end(),Compare);
    return strings;
}