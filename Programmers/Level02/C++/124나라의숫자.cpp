//https://programmers.co.kr/learn/courses/30/lessons/12899
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(int n) {
    string answer = "";
    int temp;
    while(true){
        temp=n%3;
        switch(temp){
            case 0: answer+='4';break;
            case 1: answer+='1';break;
            case 2: answer+='2';break;
        }
        if(n<4) break;
        else temp==0?n=n/3-1: n=n/3;
    }reverse(answer.begin(), answer.end());
    return answer;
}