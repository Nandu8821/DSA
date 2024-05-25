#include<iostream>
#include<array>
using namespace std;

int main(){
   array<int,4> a1{10,20,30,40};
   array<int,4> a2{100,200,300,400};

   swap(a1,a2);
   for(auto k : a1){
    cout<<k<<"\n";
   }

cout<<"data of a2\n";

for(auto k : a2){
    cout<<k<<"\n";
}

}

