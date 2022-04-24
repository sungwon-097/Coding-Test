#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
bool isprime(int num){
    for(int i = 2; i<=sqrt(num);i++){
        if(num%i==0)
            return false;
    }
    return true;
}
int solution(vector<int> nums) {
    int answer = 0;
    int num;
    vector<int> res;
    for(int i = 0;i<nums.size()-2;i++){
        for(int j = i+1;j<nums.size()-1;j++){
            for(int k = j+1;k<nums.size();k++){
                answer += isprime(nums[i]+nums[j]+nums[k]);
            }
        }
    }
    
    return answer;
}