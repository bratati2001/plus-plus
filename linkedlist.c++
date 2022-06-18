#include<iostream>
using namespace std;
class Node{
    int val;
 Node*next;
}

int main(){
    Node*head;
    Node*first;
    Node*second;
    Node*third;
    Node*fourth;


    first=new Node();
    second=new Node();
    third=new Node();
    fourth=new Node();


    first->val =2;
    first->next =second;

    second->val =4;
    second->next=thired;

    third->val=6;
    third->next=fourth;

    fourth->val=8;
    fourth->next=NULL;

    head=first;
}
