#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    string su = "수";
    string park = "박";
    for(int i = 0;i < n;i++){
        if(i%2==0)
            answer+=su;
        else
            answer+=park;
    }
    return answer;
}