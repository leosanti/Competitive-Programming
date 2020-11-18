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

using namespace std;

int main(){
	int i, n1 = 1, n2 = 2, aux, s = 0;
	
	while(n2 <= 4000000){
		if(n2%2 == 0) s+=n2;
		
		aux = n1 + n2;
		n1 = n2;
		n2 = aux;
		
	}
	
	cout << s << endl;

	return 0;
}

