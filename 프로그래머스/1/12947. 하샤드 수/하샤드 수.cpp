#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int n = x;
    int tot = 0;
    
    while(x>0){
        tot += x%10;
        x/=10;
    }
    
    if(n%tot != 0){
        answer = false;
    }
    else{
        answer = true;
    }
    
    return answer;
}