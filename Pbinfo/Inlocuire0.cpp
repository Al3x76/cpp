#include <iostream>

using namespace std;

int num(int n, int a[100]){
    int aux=a[0];
    for(int i=0; i<n; i++)
        if(a[i]<=aux) a[i]=0;
}

int main()
{
    int n, a[100];

    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];

    num(n, a);

    for(int i=0; i<n; i++) cout<<a[i]<<" ";

    return 0;
}
