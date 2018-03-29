//
//Insertion Sort Example
//Worst case O(n^2)
//Best Case O(n)
//Average Case O(n^2)
//
//

#include <iostream>

int main(){
  int array[] = {4,2,8,1,6,5,9,3,7};

  for(int j=1;j<sizeof(array)/sizeof(array[0]);j++){
    int key=array[j];
    int i=j-1;
    while(i>=0 && array[i]>key){
      array[i+1]=array[i];
      i--;
    }
    array[i+1]=key;
  }

  for(int i=0;i<sizeof(array)/sizeof(array[0]);i++){
    std::cout << array[i];
  }
  std::cout << std::endl;
  return 0;
}
