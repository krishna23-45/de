#include <iostream>

int rowSum(int x){
  int number = 0;
  number = (x -1)*4;
  return ((number)/4)*10;
}

int countSum(int num){
  int count = 0;
  int des = 0;
  while(num>0){
    count++;
    num /= 10;
  }
  des = (count*(count + 1)/2);
  return des;
}


int main(){
  int testCase = 0;
  int num = 0;
  std::cin>>testCase;
  
  for(int i =0; i < testCase; i++){
    std::cin>>num;
    std::cout<<(rowSum((num%10)) + countSum(num))<<"\n";
  }
}
