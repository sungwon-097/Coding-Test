#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    // 일단 소문자인지 대문자인지에 따라 따로 해야할듯
    // z를 넘어가는걸 생각해야 함
    // 저번에 넘어가는거중에 경계에 있는걸 고려 못했던거같음
    for(int i = 0; i<s.size();i++){
        if(isupper(s[i])){
            if(s[i]+n>'Z')
                answer+=s[i]-26+n;
            else
                answer += s[i]+n;
        }else if(islower(s[i])){
            if(s[i]+n>'z')
                answer+=s[i]-26+n;
            else
                answer += s[i]+n;
        }
        else if(s[i] == ' ')
            answer +=s[i];
            
    }
    return answer;
}