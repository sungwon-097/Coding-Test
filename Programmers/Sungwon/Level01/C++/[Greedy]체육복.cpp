//https://programmers.co.kr/learn/courses/30/lessons/42862
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int>stu(n,1);
    sort(lost.begin(), lost.end()); sort(reserve.begin(), reserve.end());
    for(int i=0; i<n; i++){
        find(lost.begin(), lost.end(), i+1)!=lost.end()?stu[i]--:stu[i]+=0;
        find(reserve.begin(), reserve.end(), i+1)!=reserve.end()?stu[i]++:stu[i]+=0;
        cout << stu[i] <<" ";
    }
    for(int i=0; i<n; i++){
        if(stu[i]==0&&stu[i+1]==2&&i+1<n) {stu[i]++; stu[i+1]--;}
        if(stu[i]==0&&stu[i-1]==2&&i-1>=0) {stu[i]++; stu[i-1]--;}
    }
    cout << endl;
    for(int i=0; i<n; i++){
        if(stu[i]>0) answer++;
        cout << stu[i] <<" ";
    }
    return answer;
}