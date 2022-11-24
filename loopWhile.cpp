#include <iostream>
using namespace std;

int main() {
   string food; 
   char resp;
   
   cout<<"Enter the food your like\n";
   cin>> food;
   cout<<" doyou wish to continue(Y/N)?";
   cin>>resp;
   
   while (resp!='N'){
       cout<<"please enter the food you like: ";
       cin>>food;
       cout<<"do you wish to continue(Y/N)? ";
       cin>>resp;
   }
   
   
    return 0;
}
