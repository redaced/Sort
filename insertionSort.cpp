#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for (int i=0;i<n;i++) {
    	int b=i;
    	while (b>0 && a[b] < a[b-1]){
      		int t=a[b];
      		a[b]=a[b-1];
      		a[b-1]=t;
      		b--;
    	}
  	}
	cout<<"Array sorted"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
