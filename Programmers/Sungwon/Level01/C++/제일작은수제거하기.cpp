//https://programmers.co.kr/learn/courses/30/lessons/12935
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer=arr;
    sort(answer.begin(), answer.end());
    arr.erase(remove(arr.begin(), arr.end(), answer[0]),arr.end());
    arr.size()==0?answer={-1}:answer=arr;
    return answer;
}