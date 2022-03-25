#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int hashad = 0;
    int before = x;
    while(true){
        hashad += x%10;
        cout << "hashad: " << hashad << endl;
        if(x/10==0)
            break;
        x = x/10;
    }
    if(before%hashad==0)
        answer = true;
    else
        answer = false;

    return answer;
}