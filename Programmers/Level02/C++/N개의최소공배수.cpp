//https://programmers.co.kr/learn/courses/30/lessons/12953
#include <string>
#include <vector>

using namespace std;

int gcd(int n1, int n2){if(n2==0)return n1;else return gcd(n2, n1%n2);}

int lcm(int n1, int n2){return n1*n2/gcd(n1, n2);}

int solution(vector<int> arr) {
    int answer=arr[0];
    for(int i=1; i<arr.size(); i++)
        answer=lcm(answer, arr[i]);
    return answer;
}