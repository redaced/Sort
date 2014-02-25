#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int min_pos;
	for(int i=0;i<n;i++){
		min_pos = i;
		for(int j=i;j<n;j++){
			if(a[j]<a[min_pos]){
				min_pos=j;
			}
		}
		if(min_pos != i){
			int b=a[i];
			a[i]=a[min_pos];
			a[min_pos]=b;
		}
	}
	cout<<"Array sorted"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}	
}
