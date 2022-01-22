#include <iostream>
using namespace std;

int friends_pairing(int n){
    if(n==1 || n==2 ||n==0){
        return n;
    }
    return friends_pairing(n-1)+friends_pairing(n-2)*(n-1);
}
int knapsack(int value[],int wt[],int n,int w){
    if(n==0 || w==0){
        return 0;
    }
    if(wt[n-1]>w){
        return knapsack(value,wt,n-1,w);
    }
    return max(knapsack(value,wt,n-1,w-wt[n-1])+value[n-1],knapsack(value,wt,n-1,w));
    
}
int main(){
    //cout<<friends_pairing(3);
    int value[]={150,50,100};
    int wt[]={10,20,30};
    int n=3;
    cout<<knapsack(value,wt,n,50);
    
    return 0;
} 