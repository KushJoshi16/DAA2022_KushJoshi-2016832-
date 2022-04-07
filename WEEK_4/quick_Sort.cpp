#include <iostream>
#include <time.h>
using namespace std;
//quick sort
void display(int ar[],int n){
    for(int i= 0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
void swap(int *i,int *j){
    int a= *i;
    *i=*j;
    *j=a;
}

int * partition(int *start,int *end){
    // int *pivot = start + (rand()%(end-start+1));
    int *pivot = end;
    int *l = start-1;
    while(start<end){
        if(start<pivot){
            l++;
            swap(l,start);
        }
        start++;
    }
    l++;
    swap(l,pivot);
    return l;
}
void quick_sort(int *start,int *end){
    if(start<end){
        int *pi = partition(start,end);
        quick_sort(start,pi);
        quick_sort(pi+1,end);
    }
}

int main(){
    int n = 10;
    cout<<"enter n"<<endl;
    cin>>n;
    int *ar = new int[n];
    srand(time(NULL));
    for(int i= 0;i<n;i++){
        ar[i] = rand()%100;
    }
    display(ar,n);
    quick_sort(ar,ar+n);
    display(ar,n);
    return 0;
}