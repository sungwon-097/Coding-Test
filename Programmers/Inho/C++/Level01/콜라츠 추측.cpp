#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num) {
    int answer = 0;
    int count = 0;
    long num1= long(num);
    while(true)
    {
        if(num1 == 1)
            break;
        if(num1%2==0)
            num1/=2;
        else
        {
            num1*=3;
            num1++;
        }
        count++;
        if(count >=500)
            return -1;
        
    }
    return count;
}