//https://programmers.co.kr/learn/courses/30/lessons/42587
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int qMax_element(queue<int>q) {
    int temp = 0, qsize=q.size();
    for (int i = 0; i < qsize; i++) {
        if (temp < q.front()) temp = q.front();
        q.pop();
    }
    return temp;
}
int solution(vector<int> priorities, int location) {
    int answer = 0, location_point=location+1;
    queue<int>task;
    for (int i : priorities) task.push(i);
    while(true){
        if (task.front() == qMax_element(task)) {
            answer++; task.pop();
            if (location == 0) break;
        }
        else {
            task.push(task.front()); task.pop();
        }
        --location;
        if (location < 0) location += task.size();
    }
    return answer;
}