#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    bool b[n+1];
    // 소수찾기지만 소수의 개수만 찾는 것
    // 소수는 1과 자기 자신으로만 나누어지는 수
    // 2부터 n까지의 수 중의 소수 개수 찾기
    // 에라토스테네스의 체를 써보자
    // 일단 모두 true, 0, 1번방 false로 만들고 시작
    for(int i = 0;i<n+1;i++){
        b[i]= true;
    }
    b[0] = false;
    b[1] = false;
    for(int i = 2;i<=sqrt(n);i++){
        if(b[i]==true){
            for(int j = i+i; j<=n;j+=i){
                b[j] = false;
            }
        }
        
    }
    for(int i = 0;i<n+1;i++){
        if(b[i])
            answer++;
    }
    return answer;
}