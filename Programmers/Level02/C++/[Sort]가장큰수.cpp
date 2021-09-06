//https://programmers.co.kr/learn/courses/30/lessons/42746
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool compare1(int a, int b) {
    return to_string(a)[0] > to_string(b)[0];
}
bool compare2(int a, int b) {
    return to_string(a) + to_string(b)>to_string(b)+to_string(a);
}
string solution(vector<int> numbers) {
    string answer = ""; int temp=0;
        for(int i:numbers) {temp+=i; if(i!=0) break;}
            if(temp==0) return "0";
    sort(numbers.begin(), numbers.end(), compare1);
    sort(numbers.begin(), numbers.end(), compare2);
    for (int i : numbers) answer += to_string(i);
    return answer;
}