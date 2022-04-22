#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    // 약수를 모두 더해야 해
    // 약수를 모두 구해야겠지
    // 약수란? 이걸로 나누어 떨어지면 약수임
    // 절반까지만 실행하면 됨
    // 절반까지 실행하고 본인을 더했어야 함
    for(int i = 1; i<=n/2;i++){
        if(n%i==0)
            answer+=i;
    }
    answer += n;
    return answer;
}