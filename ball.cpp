#include<string>
#include<stdio.h>
using namespace std;
int main(){
    string str="some string";
    for(int i=0;i<str.length();i++){
        if(i%2==0)
            str[i]='4';
        printf("c: %c\n",str[i]);
    }
    printf("%ld\n",str.length());

    return 0;
}
