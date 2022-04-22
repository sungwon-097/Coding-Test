#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    // +이거나 없으면 양수를, -가 붙어있으면 음수를 반환
    // 그럼 음수만 조건걸고 나머지를 양수하면 될듯
    // s의 길이는 5이하라지만 그건 큰 상관 없을듯
    // 0도 고려
    return stoi(s);
}