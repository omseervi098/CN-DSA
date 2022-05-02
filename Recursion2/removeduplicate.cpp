//input:aabccba
//output:abcba
#include<bits/stdc++.h>
using namespace std;
void removeConsecutiveDuplicates(char *input) {
    if(input[0]=='\0')
        return;
    if(input[0]==input[1])
    {
        for(int i=1;i<=strlen(input);i++)
            input[i]=input[i+1];
        removeConsecutiveDuplicates(input);
    }
    removeConsecutiveDuplicates(input+1);
}
int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}