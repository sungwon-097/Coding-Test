#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int a, int b) {
    int mon[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string days[7] = {"FRI", "SAT", "SUN","MON","TUE","WED","THU"};
    string answer = "";
    int day = 0;
    for(int i = 0;i<a-1;i++){
        day += mon[i];
    }
    day+=b;
    
    answer = days[(day-1)%7] ;
    return answer;
}