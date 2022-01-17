//https://programmers.co.kr/learn/courses/30/lessons/42885
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0, L_idx = 0, R_idx=people.size()-1;
    sort(people.begin(), people.end(), greater<int>());
    while (L_idx <= R_idx) {
        if (people[L_idx] + people[R_idx] <= limit) --R_idx;
    ++L_idx; ++answer;
    }
    return answer;
}