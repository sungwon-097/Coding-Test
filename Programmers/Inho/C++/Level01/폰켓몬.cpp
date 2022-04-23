#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int sizebefore = nums.size()/2;
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    int sizeafter = nums.size();
    answer = min(sizebefore, sizeafter);
    return answer;
}