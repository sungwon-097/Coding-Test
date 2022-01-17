//https://programmers.co.kr/learn/courses/30/lessons/12906
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i+1]==arr[i])
            continue;
        answer.push_back(arr[i]);
    }
    cout << "Hello Cpp" << endl;
    return answer;
}