#include<iostream>
using namespace std;
int main(){
int n=10;
int server[n];
int m=7;
int request[m];
int hash[10];
for(int i=0; i<10; i++){
hash[i]=-1;
}
cout<<"enter servers : ";
for (int i=0;i<n;i++){
cin>>server[i];
}
cout<<"enter requests : ";
for(int j=0; j<m; j++){
cin>>request[j];
}
for(int k=0; k<n ;k++){
int index = request[k] % 10;
hash[index]=request[k];
}
for(int z=0; z<m; z++){
cout<<hash[z] <<" ";
}
return 0;
}
