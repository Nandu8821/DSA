#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v {-5,-1,2};
    int sum=0;
    int mx=v[0];
    for (int i = 0; i < v.size(); i++)
    {
        sum+=v[i];
        mx=(mx,sum);
        if (sum<0)
        {
            sum=0;
        }
        if (sum>mx)
        {
            mx=sum;
        }   
    }
    cout<<"max sum of sun array : "<<mx ;
    return 0;
}