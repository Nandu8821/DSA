#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string issum(vector<int> &p , int s,int t){
      int left = 0;
      int right =s-1;
     
       sort(p.begin(),p.end());

      while (left<right)
      {
        int sum=p[left]+p[right];
         
            if (sum==t)
            {
                cout<<left<<","<<right;
                return "yes";

            }else if (sum<t)
            {
                left++;
            }else{
                right--;
            }
            
            return "No Found";
      }
              
}

int main(){
vector<int> v {2,4,6,8,7,1};
   int s = 6;
   int t=9;

   cout<<issum(v,s,t);
    

}