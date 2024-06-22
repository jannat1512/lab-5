#include<bits/stdc++.h>

using namespace std;

void swap(int &i,int &j)
{
    int temp=i;
    i=j;
    j=temp;
}

int main(){

    int i=12;
    int j=14;

    cout<<"i= "<<i<<endl;
    cout<<"j= "<<j<<endl;

    cout<<"---------------"<<endl;

    swap(i, j);

     cout<<"i= "<<i<<endl;
     cout<<"i= "<<j<<endl;


    return 0;
}
