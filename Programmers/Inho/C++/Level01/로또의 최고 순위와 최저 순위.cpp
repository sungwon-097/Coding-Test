#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int correct = 0;
    int zero = 0;
    for(int i = 0 ;i<lottos.size();i++){
        for(int j = 0; j<win_nums.size();j++){
            if(lottos[i]==win_nums[j])
                correct++;
        }
        if(lottos[i]==0)
            zero++;
    }
    zero +=correct;
    if(zero == 0)
        zero = 1;
    if(correct == 0)
        correct = 1;
    answer.push_back(7-zero);
    answer.push_back(7-correct);
    return answer;
}