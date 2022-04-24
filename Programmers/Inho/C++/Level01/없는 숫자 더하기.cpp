#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    sort(numbers.begin(), numbers.end());
    // i가 0~9 숫자 커서 , j가 numbers 커서
    for(int i = 0, j = 0; i<10;i++, j++){
        if(i!=numbers[j]){
            j--;
            answer+=i;
        }
    }
    return answer;
}