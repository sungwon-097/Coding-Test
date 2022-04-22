#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long now = n;
    vector<char> ch;
    while(true){
        if(now/10==0)
            break;
        ch.push_back(now%10+'0');
        now/=10;
    }
    ch.push_back(now%10+'0');
    sort(ch.begin(), ch.end());
    int count = 0;
    vector<char>::iterator it;
    for(it = ch.begin();it!=ch.end();it++){
        answer+=static_cast<long long>(*it-'0')*pow(10, count);
        count++;
    }
    cout << endl;
    
    return answer;
}