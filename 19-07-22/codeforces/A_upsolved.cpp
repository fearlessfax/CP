#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n;
		cin>>n;
		
		int arr[n];
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		int flag = false;
		
		for(int i=0;i<n;i++){
			if(arr[i] % arr[0] != 0){
				flag = true;
				break;
			}
		}
		
		if(!flag){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
		
	}
}
