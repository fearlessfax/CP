// 0 0 0 0 0 0
// 0 1 0 1 0 0
// 0 0 1 0 1 0

#include<bits/stdc++.h>
using namespace std;

int main(){
	int testcase;
	cin>>testcase;
	
	while(testcase--){
		int n;
		cin>>n;
		
		int arr[n];
		
		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			arr[i] = temp;
		}
		// 1 2 1 4 3
		if(n & 1){ // checks if n is odd
			long long ans = 0;
			for(int i=1;i<n-1;i++){
				if(i%2 == 1){
					long long max_of_two = max(arr[i-1],arr[i+1]);
					if(max_of_two >= arr[i]){
						ans += (max_of_two - arr[i]) + 1;	
					}
				}
			}
			cout<<ans<<endl;
			continue;	
		}
		
		else{	
			vector<long long> prefix_arr(n,0);
			vector<long long> suffix_arr(n,0);
			
			long long ans = 0;
			
			for(int i=1;i<n-1;i++){
				if(i%2 == 1){
					long long max_of_two = max(arr[i-1],arr[i+1]);
					if(max_of_two >= arr[i]){
						ans += (max_of_two - arr[i]) + 1;	
					}
					else{
						ans += 0;
					}
					
					prefix_arr[i] = ans;		
				}
				else{
					prefix_arr[i] = prefix_arr[i-1];
				}
			}
			
			long long ans_2 = 0;
			for(int i=n-2;i>0;i--){
				if(i%2 == 0){
					long long max_of_two = max(arr[i+1],arr[i-1]);
					if(max_of_two >= arr[i]){
						long long temp_ans = (max_of_two - arr[i]) + 1;	
						ans_2 += temp_ans;
					}
					else{
						ans_2 += 0;
					}
					suffix_arr[i] = ans_2;		
				}
				else{
					suffix_arr[i] = suffix_arr[i+1];
					long long temp_ans = suffix_arr[i] + prefix_arr[i-1]; 
					ans = min(ans,temp_ans);
				}
			}
			ans = min(ans,ans_2);		
			cout<<ans<<endl;
		}		
	}
}
