#include<iostream>
using namespace std;
void selection( int arr[],int n){
 for(int i=0;i<n-1;i++){
    int  main_index=i;
for(int j=i+1;j<n;j++){
 if (arr[j]> arr[main_index]) main_index=j;
}
swap (arr[main_index],arr[i]);
}
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n= sizeof(arr)/sizeof (arr[0]);
    selection(arr,n);
    for(int i=0;i<=n-1;i++) cout<<arr[i]<<endl;

}