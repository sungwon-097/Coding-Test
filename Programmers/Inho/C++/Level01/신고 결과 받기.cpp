#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;
vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size());
    map<string, int> res;
    for(string s: id_list)
        res.insert({s, 0});
    sort(report.begin(), report.end());
    report.erase(unique(report.begin(), report.end()), report.end());
    string temp = "";
    for(string s:report){
        temp = s.substr(s.find(" ")+1, s.size());
        res[temp]++;
    }
    string reportee;
    string reporter;
    int index;
    for(pair<string, int> p:res){
        if(p.second>=k){
            for(int i = 0;i<report.size();i++){
                reportee = report[i].substr(report[i].find(" ")+1, report[i].size());
                reporter = report[i].substr(0, report[i].find(" "));
                if(reportee==p.first){
                    for(int j = 0;j<id_list.size();j++){
                        if(id_list[j]==reporter){
                            index = j;
                            break;
                        }
                    }
                    answer[index]++;
                }
            }
        }
        
    }
    
    return answer;
}