/*
 Basic idea is to concatenate the parents name and then search for the characters in the parent string.
 If all characters are found in the parent string then, the permutation is possible. Achieve it by storing the frequency of the characters in the array.
*/
// time limit exceedeed : need to think of some other approach

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
		int flag = 1;
		while(N--){
			cin>>child;
			if(!isPermutation(parent, child)){
				flag = 0;
			}
		}
		if(flag == 1) cout<<"YES"<<endl;
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
