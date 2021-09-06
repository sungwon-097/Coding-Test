//https://programmers.co.kr/learn/courses/30/lessons/42889
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, double>&a, pair<int, double>&b){
     if(a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    sort(stages.begin(), stages.end());
    vector<pair<int, double>> percent;
    double divider=stages.size();
    for(int i=0; i<N; i++){
        percent.push_back({i+1, count(stages.begin(), stages.end(),i+1)/divider});
        divider!=0?divider-=count(stages.begin(), stages.end(),i+1):percent[i].second=0;
    }
    sort(percent.begin(), percent.end(), compare);
    for(auto i:percent)
        answer.push_back(i.first);
    return answer;
}