#include <iostream>

int main(){
  int a =0;
  int b =0;
  int c =0;
  int t =0;
  int res  =0;
  int total_people = 0;
  std::cin>>t;
  for(int i =0; i < t; i++){
    std::cin>>a>>b>>c;
    if(a > b){
      res = a;
      a = b;
      b = res;
      res = 0;
    }
    total_people = 2*(b - a);
    res = b - a;
    if((c > total_people) ||( b >total_people ) || ( a >total_people )){
      std::cout<<"-1"<<'\n';
    }else if(c <= total_people){
      if((c+res)<= total_people){
        std::cout<<(c+res)<<'\n';
      }else if((c+res) > total_people){
        std::cout<<( (c+res) - total_people)<<'\n';
      }
    }
  }
}
