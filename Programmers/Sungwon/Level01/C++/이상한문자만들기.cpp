//https://programmers.co.kr/learn/courses/30/lessons/12930
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool chk=true;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            chk=true; answer+=s[i];
        }
        else{
            chk==true?answer+=toupper(s[i]):answer+=tolower(s[i]); chk=!chk;
        }

    }
    return answer;
}