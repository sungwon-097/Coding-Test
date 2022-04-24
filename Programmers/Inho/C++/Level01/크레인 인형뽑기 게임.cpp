#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    // 추출해서 옮기기만 하면 될듯
    // 연쇄작용은 없는가? 있을 수 없는듯
    // 그럼 옮길 필요도 없이 변수 두개만 유지하고 같아질 때 cnt++ 해주면 될듯?
    // 사실 연쇄작용 비슷한게 있었음, 하나 지워지면 그 전에 있던게 남아야 함 변수 두개로 안될듯
    int pickcol, pickrow;
    vector<int> pickstack;
    int picknum;
    for(int i = 0; i<moves.size();i++){
        // 어느 행인지 찾아줘야 할듯 - 처음으로 0이 아닌, 0으로 변경해줘야 함
        pickcol = moves[i]-1;
        for(int j = 0;j<board.size();j++){
            if(board[j][pickcol]!=0){
                pickrow = j;
                picknum = board[j][pickcol];
                board[j][pickcol] = 0;
                break;
            }
        }
        
        if(!pickstack.empty()&&pickstack.back()==picknum){
            answer+=2;
            pickstack.pop_back();
        }else if(picknum!=0){
            pickstack.push_back(picknum);
        }
        picknum = 0;
            
    }
    return answer;
}