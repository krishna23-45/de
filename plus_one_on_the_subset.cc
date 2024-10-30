#include <iostream>

int main(){
  int testCases = 0;
  int array_length = 0;
  int min = 0;
  int max = 0;
  int element = 0;
  
  std::cin>>testCases;
  for(int i = 0; i < testCases;i++){
    std::cin>>array_length;
    for(int i =0; i < array_length;i++){
      std::cin>>element;
      if( i ==0 ){
        max = element;
        min = element;
      }else{
        if(element > max){
          max = element;
        }
        if(element < min){
          min = element;
        }

      }
      
    }
    std::cout<<(max - min)<<"\n";

  }
}
