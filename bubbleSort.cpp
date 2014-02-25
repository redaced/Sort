#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	bool swapped;
	do {
		swapped=false;
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				int b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
				swapped=true;
			}	
		}
	}while(swapped);
	cout<<"Array sorted"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
