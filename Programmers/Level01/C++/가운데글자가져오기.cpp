//https://programmers.co.kr/learn/courses/30/lessons/12903
#include<iostream> 
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
   string answer = "";
    if(s.size() & 1)
   {
      answer = answer[s.size()/2];
   }
else
   {
      answer += s[(s.size()/2) - 1];
      answer += s[(s.size()/2)];  
   }
   return answer;
}