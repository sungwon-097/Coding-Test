//https://programmers.co.kr/learn/courses/30/lessons/12940
#include <string>
#include <vector>
using namespace std;
int gcd(int a, int b){
    return b?gcd(b, a%b):a;
}
vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(gcd(n,m));
    answer.push_back(n*m/gcd(n,m));
    return answer;
}