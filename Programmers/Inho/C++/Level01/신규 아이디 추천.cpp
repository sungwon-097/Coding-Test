#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <regex>

using namespace std;

string solution(string new_id) {
    string answer = "";
    vector<char> special = {'-', '_', '.', '~', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '=', '+', '[', '{', ']', '}', ':', '?', ',', '<', '>', '/'};
    // 1단계
    std::transform(new_id.begin(), new_id.end(), new_id.begin(), ::tolower);
    // 2단계
    for(int i = 3; i<special.size();i++) // - _ . 제외하고 제거
        new_id.erase(remove(new_id.begin(), new_id.end(), special[i]), new_id.end());
    // 3단계
    while(new_id.find("..")!=string::npos)
        new_id.replace(new_id.find(".."), 2, ".");
    // 4단계
    string temp = "";
    if(new_id.front()=='.')
        new_id = new_id.substr(1, new_id.size());
    if(new_id.back()=='.')
        new_id = new_id.substr(0, new_id.size()-1);
    // 5단계
    if(new_id.empty())
        new_id = "a";
    // 6단계
    if(new_id.size()>15)
        new_id = new_id.substr(0, 15);
    
    if(new_id[new_id.size()-1]=='.'){
        new_id = new_id.substr(0, new_id.size()-1);
    }
    // 7단계
    while(new_id.size()<3){
        new_id += new_id.back();
    }
    return new_id;
}