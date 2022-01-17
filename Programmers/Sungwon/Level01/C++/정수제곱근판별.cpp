//https://programmers.co.kr/learn/courses/30/lessons/12934
#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long root_n=sqrt(n);
    if(n==root_n*root_n) answer=(root_n+1)*(root_n+1);
    else answer=-1;
    return answer;
}