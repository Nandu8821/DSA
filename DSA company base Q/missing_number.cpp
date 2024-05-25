#include<iostream>
using namespace std;
#include<vector>

int main(){
    vector<int> v{2,3,4,6,7}; 
    int i=0;
    int s=v.size();

    for(auto k : v){
        if (k+1!=v[i+1] and s-1!=i)
        {
            cout<<k+1;
            cout<<endl;
        }
        i++;
    }
    return 0;
}