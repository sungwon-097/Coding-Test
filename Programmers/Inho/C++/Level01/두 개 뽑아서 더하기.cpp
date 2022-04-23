#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    vector<int>::iterator it1;
    vector<int>::iterator it2;
    for(it1 = numbers.begin();it1!=numbers.end();it1++){
        for(it2 = it1+1;it2!=numbers.end();it2++){
            answer.push_back(*it1+*it2);
        }
    }
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    return answer;
}