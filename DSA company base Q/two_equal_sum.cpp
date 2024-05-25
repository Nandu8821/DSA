#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;

bool div(vector<int> & p){
      
      int sum=0;
      for (int i = 0; i < p.size(); i++)
      {
        sum+=p[i];
      }

      int pre =0;

      for (int  i = 0; i < p.size(); i++)
      {
           pre+=p[i];
           int ans=sum-pre;

           if (sum==ans)
           {
            return 1;
           }
           return 0;
      }        
}       


int main(){

vector<int> v {2,2,1,4};
  
 cout<<div(v);
    

}