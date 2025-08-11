#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n],fre[n]={0};
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    int c=0;
    if(fre[i]!=1){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                c++;
                fre[j]=1;
            }
        }
        if(c>1||c==1){
            cout<<"Frequency of:"<<arr[i]<<" is:"<<c<<endl;
        }
    }
}

return 0;
}
