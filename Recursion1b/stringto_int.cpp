/*
Input:
00001231
Output:
1231
*/
#include<bits/stdc++.h>
using namespace std;
int helper(char input[],int size)
{
    if(size==1)
        return input[0]-'0';
    int num=helper(input,size-1);
    num=num*10+input[size-1]-'0';
    return num;
}
int stringToNumber(char input[]) {
    return helper(input,strlen(input));
}
int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}