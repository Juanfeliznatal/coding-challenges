long long zeros(long long n) {
  long long cont = 0;
    
  while( n > 0){
    cont += n / 5;
    n /= 5;
  }
  
  return cont;
}