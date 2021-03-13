#pragma once

int fibonacci_iterative(int sequence) {
  int a={0};
  int b={1};
  for (int i=0;i<sequence;++i){
  b+=a;
  a=b-a;
  }
   return a;
}


int fibonacci_recursive(int sequence) {

  if(sequence==0)
  return 0;
  else if ((sequence==1) || (sequence==2))
  return 1; 
  else{
   return fibonacci_recursive(sequence-2)+ fibonacci_recursive(sequence-1);
}

}

