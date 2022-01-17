//https://programmers.co.kr/learn/courses/30/lessons/67256
#include <string>
#include <vector>
#include <iostream>
using namespace std;

struct Pos {
    int pos_y;
    int pos_x;
};
vector<vector<int>>keypad = { {1,2,3},{4,5,6}, {7,8,9}, {'*',0,'#'} }; //키패드 배열 저장

Pos location(int num){
    int y=0, x=0;
    for (int i = 0; i < keypad.size(); i++) {
        for (int j = 0; j < keypad[i].size(); j++)
            if (keypad[i][j] == num) {
                y = i; x = j;
                break;
            }
    }
    return { y,x }; // 키패드 숫자의 좌표를 찾는 함수
}
string solution(vector<int> numbers, string hand) {
    string answer = "";
    struct Pos L_pos = location('*'), R_pos = location('#'); // 왼손 오른손 시작위치 지정
    for (int i : numbers) {
        char temp=0;
        switch (location(i).pos_x) {
        case 0:
            temp = 'L'; L_pos = location(i); break; // 0번째 열일 때 왼손
        case 2:
            temp = 'R'; R_pos = location(i); break; // 2번째 열일 때 오른손
        case 1:
            int L_distance = abs(location(i).pos_x - L_pos.pos_x) + abs(location(i).pos_y - L_pos.pos_y), // 현재 왼손의 위치와 키의 거리
                R_distance = abs(location(i).pos_x - R_pos.pos_x) + abs(location(i).pos_y - R_pos.pos_y); // 현재 오른손의 위치와 키의 거리
            L_distance == R_distance ? temp = (toupper(hand[0])) : temp=(L_distance > R_distance ? 'R' : 'L'); //거리가 같을 경우 hand, 다를 경우 짧은 거리
            temp == 'L' ? L_pos = location(i) : R_pos = location(i); // 현재 손의 위치 업데이트
        }
        answer.push_back(temp);
    }
    return answer;
}

int main() {
    vector<int>numbers = { 1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5 };
    string hand = "right";
    string answer = "LRLLLRLLRRL";
    cout << (solution(numbers, hand)==answer?"Right!":solution(numbers, hand));
    return 0;
}
