#include<iostream>
#include<stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    long long cnt = 0; 
    stack<pair<long long, int>> st;

    while (N--) {
        long long x;
        cin >> x;
        int count = 1;

        while (!st.empty()) {

            if (st.top().first < x) {
                cnt += st.top().second; 
                st.pop();
            }
            
            else if (st.top().first == x) {
                cnt += st.top().second; 
                count += st.top().second; 
                st.pop();
            }
            
            else {
                cnt++;
                break;
            }
        }

        st.push(make_pair(x, count)); 
    }

    cout << cnt;
    return 0;
}
