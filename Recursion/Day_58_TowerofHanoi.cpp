#include <iostream>
using namespace std;


int PrintHanoi(int n,char from_rod,char to_rod,char aux_rod,int count){
  if(n==1){
      cout<<"move disk 1 from rod "<<from_rod<<" to rod "<<to_rod<<endl;
      return count+1;
  } 
  else{
      PrintHanoi(n-1,from_rod,aux_rod,to_rod,count=count+1);
      cout<<"move disk "<<n<<" from rod "<<from_rod<<" to rod "<<aux_rod<<endl;
      
      PrintHanoi(n-1,aux_rod,to_rod,from_rod,count=count+2);
      
      }
      
    
  }
    
    


int main() {
	int t;
	cin>>t;
	while(t){
	    int N;
	    cin>>N;
	   int count=0;
	   int a=PrintHanoi(N,'1','3','2',count);
	   cout<<a<<endl; 
	    t--;
	}
	return 0;
}
