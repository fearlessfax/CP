#include<bits/stdc++.h>
using namespace std;

// N length sequence (integers 1 to M)
// M character B string
// replace that or M + 1 -ai with A

int main(){
	int testcase;
	cin>>testcase;
	
	while(testcase--){
				
		int n;
		int m;
		
		cin>>n;
		cin>>m;	
		
		vector<char> v(m,'B');
		
		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			
			int second = (m + 1) - temp;
			
			int lower = min(temp,second);
			int second_lower = max(temp,second);
			
			if(v[lower-1] == 'B'){
				v[lower-1] = 'A';
			}
			else{
				v[second_lower-1] = 'A';
			}
			
		}
		
		for(int i=0;i<v.size();i++){
			cout<<v[i];
		}
		cout<<endl;
	}
	
	
	
	
	
}
