//https://programmers.co.kr/learn/courses/30/lessons/12912
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    if(a>b)
    {
        int temp=a; a=b; b=temp;
    }
    long long answer = b;
    for(int i=a;i<b;i++)
        answer+=i;
    return answer;
}