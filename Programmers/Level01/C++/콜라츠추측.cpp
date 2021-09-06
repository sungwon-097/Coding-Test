//https://programmers.co.kr/learn/courses/30/lessons/12943
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    int sum = 0;
    long long n = num;
    for (int i = 1; i <= 500; i++)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            sum += 1;
            if (n == 1)
            {
                return sum;
            }
        }
        else if (n % 2 == 1)
        {
            n = (n * 3) + 1;
            sum += 1;
        }
    }
    return -1;
}