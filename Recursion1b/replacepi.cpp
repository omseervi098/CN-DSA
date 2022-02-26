/*
Input:xpixpi
Output:x3.14x3.14
*/
#include<bits/stdc++.h>
using namespace std;
void replacePi(char input[]) {
	if(input[0]=='\0')
        return;
    replacePi(input+1);
    if(input[0]=='p'&&input[1]=='i')
    {
         input[0]='3';
         input[1]='.';
        int i;
        for(i=strlen(input)+2;i>2;i--)
        {
            input[i]=input[i-2];
        }
        input[2]='1';
        input[3]='4'; 
    }
}
int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
