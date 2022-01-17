//https://programmers.co.kr/learn/courses/30/lessons/12901?language=cpp
#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int>MONTH={31,29,31,30,31,30,31,31,30,31,30,31};
    int date=0;
    for(int i=0;i<a;i++) date+= MONTH[i-1];
    date=(date+b)%7;
    switch(date){
        case 1: answer="FRI";break;
        case 2: answer="SAT";break;
        case 3: answer="SUN";break;
        case 4: answer="MON";break;
        case 5: answer="TUE";break;
        case 6: answer="WED";break;
        case 0: answer="THU";break;
        default:;
    }
    return answer;
}