//https://programmers.co.kr/learn/courses/30/lessons/12933
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string a = "";
    a = to_string(n);
    sort(a.begin(),a.end(),greater<int>());
    answer = stoll(a);
    return answer;
}