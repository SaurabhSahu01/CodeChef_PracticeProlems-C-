#include <iostream>
using namespace std;
int numberOfSquares(int, int);
int main() {
	// suppose we have a N*N board, then we have to calculate the number of odd sided squares that can be cut from that large board 
	// create a function that returns the total number of possible such length in a row for e.g. in a 4*4 board
	// -- the base of the 3-sided square can be fitted in 2 ways. Therefore total of 2*2 = 4 such squares are possible.
	int test;
	cin>>test;
	while(test--){
	    int N;
	    cin>>N;
	    int i=1;
	    int sum = 0;
	    while(i<=N){
	       sum += numberOfSquares(i, N);
	       i += 2;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
int numberOfSquares(int length, int N){
    return (N-length+1)*(N-length+1);
}
