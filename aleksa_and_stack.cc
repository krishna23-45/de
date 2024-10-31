#include <iostream>

int checkFirstDigit(int num){
  int first =0;
  while( num > 0){
    first = num % 10;
    num /= 10;
  }
  return first;
}

int evenPosition(int element){
  int count =0;
  int rem =0;

  while(element >0){
    rem = element % 10;
    count++;
    if(rem % 2 == 0){
      break;
    }
    element /= 10;
    
  }
  return count;
}

bool checkEven(int element){
  bool flg = false;
  int rem =0;
  while(element > 0){
    rem = element % 10;
    if(rem % 2 ==0){
      flg = true;
    }
    element /= 10;
  }

  return flg;
}





int digit(int element){
  int count =0;
  while(element > 0){
    count++;
    element /= 10;
  }
  return count;
}

int main(){
  int testCases = 0;
  int element =0;
  std::cin>>testCases;
  for(int i =0; i < testCases; i++){
    std::cin>>element;
    if(element % 2 ==0){
      std::cout<<"0"<<"\n";
      continue;
    }else{
      if(checkFirstDigit(element) %2 == 0){
        std::cout<<"1\n";
        continue;
      }else if(checkEven(element)){
        std::cout<<"2\n";
        continue;
      }else{
        std::cout<<"-1\n";
        continue;
      }
    }

  }
}
