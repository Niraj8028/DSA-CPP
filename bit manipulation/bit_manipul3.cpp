#include <iostream>
using namespace std;


//I] Finding a unique number
// int unique_no(int arr[],int n){
//     int sum=0;
//     for(int i=0; i<n; i++){
//         sum=sum^arr[i];
//     }
//     return sum;
//}
//ii] Find two unique numbers
// int getbit(int n, int pos){
//     return(n & (1<<pos))!=0;
// }

// int unique_2no(int arr[],int n){
//     int sum=0;
//     for(int i=0; i<n; i++){
//         sum=sum^arr[i];
//     }
//     int temp=sum; 
    
//     int setbit=0;
//     int pos=0;

//     while(setbit!=1){
//         setbit=sum & 1;
        
//         pos++;
//         1>>sum;
//     }

//     int newxor=0;
//     for(int i=0; i<n; i++){
//         if(getbit(arr[i],pos-1)){
//             newxor=newxor^arr[i];

//         }
//     }

//     int ans=temp^newxor;
//     cout<<newxor<<endl; 
//     cout<<ans;
// }

//iii] Unique number in an array where all numbers except one, are present thrice

int getbit(int n, int pos){
     return(n & (1<<pos))!=0;
    }   
int setbit(int n ,int pos){
     return(n | (1<<pos));
    }

int unique(int arr[],int n){
    int result=0;
    for(int i=0; i<64; i++){
        int count=0;
        
        for(int j=0; j<n; j++){
            if(getbit(arr[j],i)){
                count++;
            }
        }
        if(count%3!=0){
            result=setbit(result,i);
        }
    }
    return result;

}
int main(){
    int arr[]={1,2,3,7,1,2,3,1,2,3};
    //cout<<unique_no(arr,7);
    //unique_2no(arr,8);
    cout<<"the ans is "<<unique(arr,10);
    
    return 0;
}