//https://programmers.co.kr/learn/courses/30/lessons/12948
#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    for(int i=0; i<phone_number.size()-4; i++)
        phone_number[i]='*';
    answer=phone_number;
    return answer;
}