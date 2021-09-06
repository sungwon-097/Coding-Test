//https://programmers.co.kr/learn/courses/30/lessons/12911
#include <string>
#include <vector>

using namespace std;

long long chk(int n) {
    int sum = 0;
    while (n > 0) {
        if (n%2==1) sum++;
        n /= 2;
    }
    return sum;
}
int solution(int n) {
    int answer = n+1;
    while (chk(n) != chk(answer)) ++answer;
    return answer;
}