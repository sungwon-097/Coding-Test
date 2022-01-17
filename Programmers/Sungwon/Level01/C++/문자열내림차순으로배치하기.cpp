//https://programmers.co.kr/learn/courses/30/lessons/12917
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool Compare(char a,char b){
    if(a>b){
        return b<a; 
    }
}
string solution(string s){
    string answer = "";
    sort(s.begin(), s.end(),Compare);
    return s;
}