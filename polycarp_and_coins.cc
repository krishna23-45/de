#include <iostream>

int main(){
  int testCase = 0;
  int element =0;
  int x =0;
  int y =0;
  std::cin>>testCase;
  for(int i =0; i < testCase; i++){
    std::cin>>element;
    y = element/3;
    if((element % 3) == 2){
      y++;
    }
    x = element - 2*y;
    std::cout<<x<<" "<<y<<"\n";
  }
}
