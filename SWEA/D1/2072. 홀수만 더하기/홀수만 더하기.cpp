#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t_case;
    cin >> t_case;
    
    for(int i=1; i<=3; i++){
    	cout << '#' << i << ' ';
        int sum =0;
        for(int j=0; j<10; j++){
            int x;
            cin >> x;
            if(x%2==1){
                sum += x;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}