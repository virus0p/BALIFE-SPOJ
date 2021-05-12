#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	
   while(1){
   	  int n; cin >> n;
   	  if(n == -1) {
   	  	 cout <<"-1\n";
   	  	 break;
   	  }
   	  int a[n];
      ll sum = 0;
   	  for(int i=0;i<n;i++){
   	  	 cin >> a[i];
   	  	 sum += a[i];
   	  }
      
       if(sum%n != 0){
       	 cout << "-1\n";

       }
      else{
      	 ll shouldbe = sum/n;
      	 ll current = 0;
         ll ans = 0;
      	 for(int i=0;i<n-1;i++){
      	 	int dif = a[i]-shouldbe;
      	 	a[i+1] += dif;
 			current = max(current,(ll)abs(dif));
      	 }

      	 cout << current <<"\n";
      }
   	 
   }

  return 0;

}