#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    if(s.size()%2!=0){
        answer+= s[s.size()/2];
    }else
    {
        answer= answer+ s[s.size()/2-1]+ s[s.size()/2];
        
    }
    return answer;
}