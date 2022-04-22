#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    if(sqrt(n)-static_cast<int>(sqrt(n))!=0)
        return -1;
    answer = sqrt(n);
    answer = pow(++answer, 2);
    return answer;
}