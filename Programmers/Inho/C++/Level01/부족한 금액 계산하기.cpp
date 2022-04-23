using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long nowMoney = 0;
    // 현재 돈에서 프라이스 까고, 남은거 음수치면 될듯
    for(int i = 0;i<count;i++){
        nowMoney += price*(i+1);
    }
    answer = nowMoney - money;
    if(money>=nowMoney)
        return 0;
    return answer;
}