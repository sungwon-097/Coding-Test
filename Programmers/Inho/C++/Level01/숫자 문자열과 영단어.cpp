#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    while(s.find(numbers[0])!=string::npos)
        s.replace(s.find(numbers[0]), numbers[0].size(), "0");
    while(s.find(numbers[1])!=string::npos)
        s.replace(s.find(numbers[1]), numbers[1].size(), "1");
    while(s.find(numbers[2])!=string::npos)
        s.replace(s.find(numbers[2]), numbers[2].size(), "2");
    while(s.find(numbers[3])!=string::npos)
        s.replace(s.find(numbers[3]), numbers[3].size(), "3");
    while(s.find(numbers[4])!=string::npos)
        s.replace(s.find(numbers[4]), numbers[4].size(), "4");
    while(s.find(numbers[5])!=string::npos)
        s.replace(s.find(numbers[5]), numbers[5].size(), "5");
    while(s.find(numbers[6])!=string::npos)
        s.replace(s.find(numbers[6]), numbers[6].size(), "6");
    while(s.find(numbers[7])!=string::npos)
        s.replace(s.find(numbers[7]), numbers[7].size(), "7");
    while(s.find(numbers[8])!=string::npos)
        s.replace(s.find(numbers[8]), numbers[8].size(), "8");
    while(s.find(numbers[9])!=string::npos)
        s.replace(s.find(numbers[9]), numbers[9].size(), "9");
    answer = stoi(s);
    return answer;
}