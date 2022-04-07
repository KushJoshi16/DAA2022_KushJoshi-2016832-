#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;
//bubble sort
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
    int bubble_sort(int *start,int *end){
        int c = 0;

        int *tend = end;
        bool ntswp=1;
        for(int *i = start;i<end-1;i++){
            ntswp=1;
            for(int *j = start;j<tend-1;j++){
                if(*j>*(j+1)){
                    swap(j,j+1);
                    ntswp=0;
                }
                c++;
            }
            if(ntswp)
            break;
            tend--;
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
    int c = bubble_sort(ar,ar+n);
    cout<<"No. of comparisions = "<<c<<endl;
    display(ar,n);
    return 0;
}