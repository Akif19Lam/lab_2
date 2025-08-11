#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter array size : ";
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int fast_highest=a[0];
    int second_highest;
    for(int i=0;i<n;i++){
        if(fast_highest<a[i]){
            second_highest=fast_highest;
            fast_highest=a[i];
        }
    }
    cout<<"second largest element  : "<<second_highest<<endl;
}
