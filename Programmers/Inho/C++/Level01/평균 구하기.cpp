#include <string>
#include <vector>
#include <iostream>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for(int a: arr){
        answer +=a;
    }
    return answer/arr.size();
}