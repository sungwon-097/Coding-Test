#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    string three = "";
    while(n/3!=0){
        three+=to_string(n%3);
        n/=3;        
    }
    three+=to_string(n%3);
    reverse(three.begin(), three.end());
    for(int i = 0; i<three.size();i++){
        answer+=(three[i]-'0')*pow(3, i);
    }
    return answer;
}