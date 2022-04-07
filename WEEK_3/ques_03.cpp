#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;
//insertion  sort
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
    int insertion_sort(int *start,int *end){
        int c = 0;
        int key;
        for(int *i = start+1;i<end;i++)
        {
            int *j = i-1;
            key = *i;
            while(j>=start && *j>key){
                *(j+1) = *j;
                j--;
                c++;
            }
            *(j+1)=key;
        }
        return c;
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
    int c = insertion_sort(ar,ar+n);
    cout<<"No. of comparisions = "<<c<<endl;
    display(ar,n);
    return 0;
}