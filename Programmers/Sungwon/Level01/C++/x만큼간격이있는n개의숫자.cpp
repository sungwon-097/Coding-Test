//https://programmers.co.kr/learn/courses/30/lessons/12954
#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int temp=x;
    for(int i=0; i<n; i++,temp+=x)
        answer.push_back(temp);
    return answer;
}