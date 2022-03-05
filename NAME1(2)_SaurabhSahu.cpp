/*
 Basic idea is to concatenate the parents name and then search for the characters in the parent string.
 If all characters are found in the parent string then, the permutation is possible. Achieve it by storing the frequency of the characters in the array.
*/
/*
  The same previous concept of frequency array will be used. But this time I would be concatenating the child strings and then run the query on that.
*/

#include <iostream>
using namespace std;
bool isPermutation(string, string);
int main() {
	int test,N;
	string child, parent1, parent2, parent;
	cin>>test;
	while(test--){
		cin>>parent1;
		cin>>parent2;
		parent = parent1 + parent2;
		cin>>N;
        string testChild = "";
		while(N--){
			cin>>child;
			testChild += child;
		}
        if(isPermutation(parent, testChild)) cout<<"YES"<<endl;  // just concatenate all the child strings and then direct run the function to check
        else cout<<"NO"<<endl;
	}
	return 0;
}

bool isPermutation(string parent, string child){
    int array[26] = {0};
    for(int i=0;i<parent.length();i++){
        if(parent[i] >= 97 && parent[i] <= 125){
            array[parent[i]-97]++;
        }
    }
    for(int i=0;i<child.length();i++){
        if(child[i] >= 97 && child[i] <= 125){
            array[child[i] - 97]--;
        }
    }
    for(int i=0;i<26;i++){
        if(array[i] < 0){
            return false;
        }
    }
    return true;
}