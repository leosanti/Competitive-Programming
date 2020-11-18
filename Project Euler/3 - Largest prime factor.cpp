#include <bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <iostream>
#include <cstdio>
#include <sstream>

#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>

#include <cstdlib>
#include <cstring>
#include <cmath>

#define ll long long

using namespace std;

int main(){
	ll n = 600851475143, div = 2;
	while(n != 0){
		if(n%div != 0){
			div++;
		}
		else{
			int max = n;
			n = n / div;
			if(n == 1){
				cout << max << endl;
				break;
			}
		}
	}


	return 0;
}

