#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int max = 0;
    for(int i = n; i<=n*m;i= i+n){
        for(int j = m; j<=n*m;j=j+m){
            if(i==j){
                max = i;
            }
        }
        if(max!=0)
            break;
    }
    int min = m*n/max;
    answer.push_back(min);
    answer.push_back(max);
    return answer;
}