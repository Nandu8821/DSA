#include <iostream>
#include<algorithm>
using namespace std;

string palindream(string S)
{

string v = S;
reverse(v.begin(),v.end());

if(S==v){
    return "yes it is palindream";
}else{
    return "no it is  not  a palindream";
}

}

int main()
{
   string s ="abcba";
   cout<<palindream(s);
    return 0;
}