#include <string.h>
#include <iostream>
using namespace std;
int main(){
   char *str="ajaykumar";
   cout<<"original string::"<<str;
   cout<<endl<<"String after reverse::";
   for(int i=(strlen(str)-1);i>=0;i--){
      cout<<str[i];
   }
   return 0;
}
