//https://programmers.co.kr/learn/courses/30/lessons/42586
#include <string>
#include <vector>
#include <iostream>
#include <queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer; queue<int>task;
    int days = 0, lastest=0;
    for (int i = 0; i < progresses.size(); i++) {
        task.push(progresses[i]);
        while (task.front() + days*speeds[i] < 100)
            ++days;
        if (lastest < days) answer.push_back(1); else answer[answer.size() - 1]++;
        task.pop();
        lastest = days;
    }
    return answer;
}
int main() {
    vector<int> progresses = { 93, 30, 55 }, speeds = { 1, 30, 5 };
    vector<int> answer=solution(progresses, speeds);
    for (int i :answer) cout << i;
    return 0;
}