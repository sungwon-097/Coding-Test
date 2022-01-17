//https://programmers.co.kr/learn/courses/30/lessons/17681#
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer(n);
    for(int i=0; i<n; i++){
        int check_bit=arr1[i]|arr2[i];
        for(int j=0; j<n; j++){
            answer[i]+=check_bit&1?'#':' ';
            check_bit=check_bit>>1;
        }
        reverse(answer[i].begin(), answer[i].end());
    }
    return answer;
}