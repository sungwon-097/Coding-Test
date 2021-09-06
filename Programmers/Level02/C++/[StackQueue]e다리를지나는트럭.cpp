//https://programmers.co.kr/learn/courses/30/lessons/42583
#include <string>
#include <vector>
#include <queue>
using namespace std;

int BridgeOnWeight(queue<int>q) {
    int sum=0;
    while(!q.empty()) {
        sum += q.front(); q.pop();
    }
    return sum;
}
int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0, idx=0;
    queue<int>BridgeOnTrucks;
    while (true) {
        if (BridgeOnTrucks.size() > bridge_length-1) BridgeOnTrucks.pop();
        if (idx<truck_weights.size()&&BridgeOnWeight(BridgeOnTrucks) + truck_weights[idx] <= weight) {
            BridgeOnTrucks.push(truck_weights[idx]); ++idx;
        }else BridgeOnTrucks.push(0);
        answer++;
        if (BridgeOnWeight(BridgeOnTrucks) == 0) break;
    }
    return answer;
}