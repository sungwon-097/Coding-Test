#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    vector<string> temp;
    for(int i = 0;i<26;i++){
        temp.clear();
        for(string st:strings){
            if(st[n]==i+'a'){
                temp.push_back(st);
            }
        }
        sort(temp.begin(), temp.end());
        for(string st:temp){
            answer.push_back(st);
        }
    }
    return answer;
}