#include <iostream>
using namespace std;

int main() {
   int n=0,a=0,b=1,c;
   cout<<"inserire un numero intero n"<<endl;
   cin>>n;
   int k=0;
   if(n>=2){
   while (k<n) {
      c=a+b;
      cout<<c<<endl;
     b=a;
     a=c;
     k++;
   }}else{
      cout<<"errore"<<endl;
   }
return 0;
}
