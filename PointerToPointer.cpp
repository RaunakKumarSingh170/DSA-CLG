#include<iostream>
#include<vector>
using namespace std;
int main(){

int a=10;
int *ptr=&a;
int **ParPtr=&ptr;
cout<<&ptr<<endl;
cout<<ParPtr<<endl;
return 0;
}
