#include<bits/stdc++.h>
using namespace std;
int countZeros(int n) {
    if(n<=9)
    {
        if(n==0)
            return 1;
        else
            return 0;
    }
    int rem=n%10;
    int ans=countZeros(n/10);
    if(rem==0)
        return ans+1;
    return ans;
}
int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}