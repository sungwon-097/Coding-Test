//https://programmers.co.kr/learn/courses/30/lessons/12947
#include <string>
#include <vector>
using namespace std;

bool solution(int x) {
    int sum = 0, t = x;
    for(;t > 0;t /= 10) sum += t % 10;
    return (x % sum != 0)?false:true;
}