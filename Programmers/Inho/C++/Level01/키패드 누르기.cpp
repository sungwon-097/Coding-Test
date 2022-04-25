#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    vector<vector<int>> pad = {{3, 1}, {0, 0}, {0, 1}, {0, 2}, {1, 0}, {1, 1}, {1, 2}, {2, 0}, {2, 1}, {2, 2}};
    vector<int> left = {3, 0};
    vector<int> right = {3, 2};
    int leftlen;
    int rightlen;
    for(int i = 0; i<numbers.size();i++){
        // 1, 4, 7
        if(pad[numbers[i]][1]==0)
        {
            left = pad[numbers[i]];
            answer+='L';
        }else if(pad[numbers[i]][1]==2){ // 3, 6, 9
            right = pad[numbers[i]];
            answer+='R';
        }else { // 2, 5, 8
            // 거리재기
            leftlen = abs(pad[numbers[i]][0]-left[0]) + abs(pad[numbers[i]][1]-left[1]);
            rightlen = abs(pad[numbers[i]][0]-right[0]) + abs(pad[numbers[i]][1]-right[1]);
            if(leftlen==rightlen){ // 거리가 같을 때 주사용손에 따라 다름
                if(hand.compare("right")==0){
                    right = pad[numbers[i]];
                    answer+='R';
                }else{
                    left = pad[numbers[i]];
                    answer+='L';
                }
            }else if(leftlen<rightlen){
                left = pad[numbers[i]];
                answer+='L';
            }else {
                right = pad[numbers[i]];
                answer+='R';
            }
        }
    }
    return answer;
}