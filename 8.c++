#include<iostream>
using namespace std;
void selection(int A[], int n){
for( int i=0;i<n-1;i++){
int iMin=i;
for(int j=i+1;j<n;j++){
 if (A[j]< A[iMin]) iMin=j;

}
swap(A[iMin],A[i]);

}
}
int main(){
int A[]{2,4,3,1,6,5,7,8,9};
selection(A,9);
for(int i=0;i<9;i++)cout<<A[i]<<endl;

}
