//https://programmers.co.kr/learn/courses/30/lessons/12921
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool>chk(n, false);

    for(int i=2;i<n+1;i++)
        if(chk[i]==false){
            answer++;
            for(int j=2;i*j<n+1;j++)
                chk[i*j]=true;
        }
    return answer;
}