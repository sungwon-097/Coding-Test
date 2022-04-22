#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> seoul) {
    string kim = "Kim";
    string answer;
    int cnt = 0;
    for(string st: seoul)
    {
        if(kim.compare(st)==0)
            break;
        cnt++;

    }
    answer += "김서방은 ";
    answer += to_string(cnt);
    answer += "에 있다";
    return answer;
}