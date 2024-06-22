#include<bits/stdc++.h>
using namespace std;

int large(int a[],int n){
    int l=INT_MIN;
    for(int i=0; i<n ; i++){
        if(a[i]>l)
        {
            l=a[i];
        }

    }
    return l;
}



int main(){

    int n=5;
    int a[n]={22,35,8,6,7};

    int largest =large(a,n);

    cout<<"Largest Number is : "<<largest<<endl;

    return 0;
}
