#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;
bool cmp(pair<int, double> a, pair<int, double> b){
    if(a.second==b.second)
        return a.first<b.first;
    return a.second>b.second;
}
vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    int stage = 0;
    double cnt = 0;
    double usernum = stages.size();
    vector<pair<int, double>> rate;
    sort(stages.begin(), stages.end());
    
    for(int i = 1; i<=N;i++){
        rate.push_back({i, 0});
    }
    
    for(int i = 0; i<N;i++){
        cnt = count(stages.begin(), stages.end(), i+1);
        if(usernum <=0)
            rate[i] = pair<int, double>(rate[i].first, 0);
        else
           rate[i] = pair<int, double>(rate[i].first, cnt/usernum);
        usernum-=cnt;
        
            
    }
    sort(rate.begin(), rate.end(), cmp);
    for(pair<int, double> a:rate){
        answer.push_back(a.first);
        cout << a.first <<" " << a.second << endl;
    }
    
    
    return answer;
}