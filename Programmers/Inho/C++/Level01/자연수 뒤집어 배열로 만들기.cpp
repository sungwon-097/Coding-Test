#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string str = to_string(n);
    reverse(str.begin(), str.end());
    for(int i = 0; i< str.size();i++){
        answer.push_back(str[i]-'0');
    }
    
    return answer;
}