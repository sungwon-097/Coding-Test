//https://programmers.co.kr/learn/courses/30/lessons/42748
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer, arrcopy;
    for(int i=0; i<commands.size(); i++){
        arrcopy=array;
        sort(arrcopy.begin()+commands[i][0]-1, arrcopy.begin()+commands[i][1]-1);
        answer.push_back(arrcopy[commands[i][0]+commands[i][2]]);
        arrcopy.clear();
    }
    return answer;
}