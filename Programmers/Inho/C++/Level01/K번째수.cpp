#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    // 커맨드 갯수만큼 돌아
    // [i][0]부터 [i][1]포함 범위까지 잘라야함
    // 정렬, ~번째 수 넣기
    for(int i = 0; i<commands.size();i++){
        temp.clear();
        for(int j = commands[i][0];j<=commands[i][1];j++){
            temp.push_back(array[j-1]);
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp[commands[i][2]-1]);
    }
    return answer;
}