#include<iostream>
using namespace std;
inline int min(int a,int b){return a>b?b:a;}
int stair(int n,int x=0,int y=0,int z=0){
    if(n<0){return 10000000;}
    if(n==0){return x+y+z;}
    return (min(min(stair(n-3,x+1,y,z),
    stair(n-2,x,y+1,z)),
    stair(n-1,x,y,z+1)));
}
int main(){
    int n;
    cin>>n;
    cout<<stair(n);
}