#include<iostream>
using namespace std;

int main(){
	int m=10;
	int arr[m];
	cout<<"enter  score of player : ";
	for(int i=0 ; i<m ; i++){
		cin>>arr[i];
	}
	for(int i=0; i<m; i++){
  for(int j=0; j<m-i-1; j++){
      if(arr[j]>arr[j+1]){
      int temp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
      }
  }
}
		
	

for(int i=0 ; i<m ; i++){
	cout<<arr[i]<<" ";
}
  return 0;
}
