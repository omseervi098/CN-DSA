/*
Input:xaxb
Output:xaxb
*/
#include<bits/stdc++.h>
using namespace std;
void removeX(char input[]) {
    if(input[0]=='\0')
        return;
    removeX(input+1);
    if(input[0]=='x')
    {
        for(int i=0;input[i]!='\0';i++)
        {
            input[i]=input[i+1];
        }
    }
}
int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}