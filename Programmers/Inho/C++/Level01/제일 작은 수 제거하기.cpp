#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min = arr[0];
    if(arr.size()==1){
        answer.push_back(-1);
        return answer;
    }
        
    for(int i = 0;i<arr.size();i++){
        if(arr[i]<min)
            min = arr[i];
    }
    
    for(int i = 0;i<arr.size();i++){
        if(arr[i]==min)
            continue;
        answer.push_back(arr[i]);
    }
    return answer;
}