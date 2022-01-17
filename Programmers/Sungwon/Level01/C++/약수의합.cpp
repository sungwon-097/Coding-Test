//https://programmers.co.kr/learn/courses/30/lessons/12928
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=1; i*i<n+1;i++)
        if(n==i*i) answer+=i;
        else if(n%i==0) answer+=i+n/i;
    return answer;
}