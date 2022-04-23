#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int small, big;
    int rSmall = 0;
    int rBig = 0;
    for(int i = 0;i< sizes.size();i++){
        small = min(sizes[i][0], sizes[i][1]);
        big = max(sizes[i][0], sizes[i][1]);
        rSmall = max(rSmall, small);
        rBig = max(rBig, big);
        
    }
    answer = rSmall * rBig;
    
    return answer;
}