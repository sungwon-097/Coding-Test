#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string temp = "";
    int res = 0;
    for(int i = 0;i<n;i++){
        temp = "";
        res = int(arr1[i]|arr2[i]);
        while(res/2!=0){
            if(res%2==1)
                temp+='#';
            else
                temp+=' ';
            res/=2;
        }
        if(res%2==1)
                temp+='#';
            else
                temp+=' ';
        for(int j = temp.size();j<n;j++){
            temp+=' ';
        }
        reverse(temp.begin(), temp.end());
        answer.push_back(temp);
        
    }
    
    return answer;
}