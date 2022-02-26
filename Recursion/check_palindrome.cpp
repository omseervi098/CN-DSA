#include<bits/stdc++.h>
using namespace std;
bool helper(char input[],int st,int end)
{
    if(st>=end)
        return true;
    if(input[st]==input[end])
        return helper(input,st+1,end-1);
    return false;
}
bool checkPalindrome(char input[]) {
    return helper(input,0,strlen(input)-1);
}
int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}