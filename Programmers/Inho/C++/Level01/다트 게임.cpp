#include <string>
#include <iostream>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    // 3번의 기회
    // 0점부터 10점까지
    // 일반, 제곱, 세제곱 영역이 있음
    // 스타상(해당점수와 직전 점수 2배)과 아차상(해당점수 -)이 있음
    // 첫발이 스타상일 경우 그것만
    // 스타상 중첩 가능
    // 스타상 아차상 중첩 가능
    int cnt = 0;
    int res[3] = {0, };
    for(int i = 0; i<dartResult.size();){
        if(dartResult[i+1]=='0'){
            res[cnt] = 10;
            i+=2;
        }else{
            res[cnt] = dartResult[i]-'0';
            i++;
        }
        // cout << "res " << res[cnt] << " cnt " << cnt << " i " << i-1 << endl;
        if(dartResult[i]=='S')
            res[cnt] = pow(res[cnt], 1);
        else if(dartResult[i]=='D')
            res[cnt] = pow(res[cnt], 2);
        else if(dartResult[i]=='T')
            res[cnt] = pow(res[cnt], 3);
        i++;
        
        // cout << "res " << res[cnt] << " cnt " << cnt << " i " << i-1 << endl;
        if(dartResult[i]=='*'){
            if(cnt!=0){
                res[cnt-1] *= 2;
            }
            res[cnt] *= 2;
            i++;
        }
        else if(dartResult[i]=='#'){
            res[cnt] = -res[cnt];
            i++;
        }
        // cout << "res " << res[cnt] << " cnt " << cnt << " i " << i-1 << endl;
        cnt++;
    }
    for(int j = 0;j<3;j++){
        answer+= res[j];
    }
    return answer;
}