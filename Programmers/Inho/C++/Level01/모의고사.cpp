#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> first = {1, 2, 3, 4, 5};
    vector<int> second = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> third = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    vector<int> res(3);
    for(int i = 0;i<answers.size();i++){
        if(first[i%first.size()]==answers[i])
            res[0]++;
        if(second[i%second.size()]==answers[i])
            res[1]++;
        if(third[i%third.size()]==answers[i])
            res[2]++;
    }
    // cout << res[0] << " " << res[1] << " " << res[2] << " ";
    int maxi = *max_element(res.begin(), res.end());
    for(int i = 0;i<res.size();i++){
        if(maxi==res[i])
            answer.push_back(i+1);
    }
    return answer;
}