#include <iostream>
#include <queue>
using namespace std;

int main(){
  queue<int> cola1;
  cola1.push(10);
  cola1.push(20);
  cola1.push(30);

  cout<<"tamanio: "<<cola1.size()<<endl;
  cout<<"primer elemento: "<<cola1.front()<<endl;
  cout<<"ultimo elemento: "<<cola1.back()<<endl;
  
  return 0;
}