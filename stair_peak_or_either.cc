#include <iostream>

int main(){
  int testCase = 0;
  std::cin>>testCase;
  int a, b, c;
  for(int i =0; i < testCase; i++){
    std::cin>>a>>b>>c;
    if((c - b) > 0 && (b - a)>0){
      std::cout<<"STAIR\n";
    }else if((b - a)> 0 && (b - c) > 0){
      std::cout<<"PEAK\n";
    }else{
      std::cout<<"NONE\n";
    }
  
  }
}
