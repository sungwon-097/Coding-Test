//https://programmers.co.kr/learn/courses/30/lessons/64061
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int>bucket={0};
    for(int i=0; i<moves.size(); i++)
        for(int j=0; j<board.size(); j++)
            if(board[j][moves[i]-1]!=0)
                if(bucket[bucket.size()-1]==board[j][moves[i]-1]){
                    bucket.pop_back(); 
                    board[j][moves[i]-1]=0; answer+=2; break;
                }
                else {
                    bucket.push_back(board[j][moves[i]-1]);
                    board[j][moves[i]-1]=0; break;
                }
    return answer;
}
