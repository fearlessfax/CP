#include<bits/stdc++.h>
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
		
		int ptr = n-1;
		
		while(true){
			int temp_zero = 0;
			int deadlock = 0;

			for(int i=n-1;i>0;i--){
				if(arr[i] == 0){
					temp_zero++;
				}
				else if(arr[i-1] == 0){
					deadlock = 0;
					break;
				}
				else if(arr[i] >= arr[i -1] && arr[i -1] != 0){
					int temp = arr[i]-arr[i-1];
					if(temp == 0 && (arr[i+1] == 0 || i == n-1)){
						arr[i] = arr[i]-arr[i-1];
						deadlock++;
					}
					else if(temp == 0 && arr[i+1] != 0){
						continue;
					}
					else{
						arr[i] = arr[i]-arr[i-1];
						deadlock++;
					}
					
				}	
			}	
			
			if(temp_zero == n-1){
				cout<<"YES"<<endl;
				break;	
			}
			if(deadlock == 0){
				cout<<"NO"<<endl;
				break;
			}
		}
		
	
		
	}
}
