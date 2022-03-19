#include <iostream>

using namespace std;

long long H(long long previousHash, string &transaction,long long token);

int main(){

    long long  n(0);
    cin>>n;
    string str("alice-pays-bob-3-sg-coins");
    cout <<H(n,str,606969470)<<endl;


    return 0;
}


long long H(long long previousHash, string &transaction,long long token) {
  long long v = previousHash;
  for (int i = 0; i < transaction.length(); i++) {
    v = (v * 31 + transaction[i]) % 1000000007;
  }
  return (v * 7 + token) % 1000000007;
}