#include<iostream>
using namespace std;

int search(int arr[], int N,int x){
    for(int i=0;i<N;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={3,5,6,9,4,2,7};
    int N=sizeof(arr)/sizeof(arr[0]);
    int x=9;
    
    int result=search(arr,N,x);
    (result == -1) ? cout<<"element is not present" : cout<<"element at "<<result;
    return 0;
}