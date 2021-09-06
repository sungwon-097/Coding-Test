//https://programmers.co.kr/learn/courses/30/lessons/12926
#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i=0;i<s.size();i++){
        if(s[i]>'a'-1&&s[i]<'z'+1) (s[i]>'z'-n)?s[i]+=n-26:s[i]+=n;
        else if(s[i]>'A'-1&&s[i]<'Z'+1) (s[i]>'Z'-n)?s[i]+=n-26:s[i]+=n;
        answer+=s[i];
        }
    return answer;
}