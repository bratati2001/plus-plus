#include<iostream>
using namespace std;
int binsearch(int val,int arr[] ,int l, int r){
int mid= (l+r)/2;
if(val==arr[mid]) return mid;
if(val<arr[mid]) return binsearch(val,arr,l,mid-1);
return binsearch(val,arr,mid+1,r);
}
int main(){
    int arr[]={8,2,1,4,6,3,5,7,9};
    int val=8;
    int n= sizeof(arr)/sizeof (arr[0]);
    int result=binsearch(val,arr,0,n-1);
    cout<<result<<endl;

}