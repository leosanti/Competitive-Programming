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
	int n;
	cin >> n;
	int s = 0;
	
	for(int i = 0; i < n; i++){
		if(i%3 == 0 || i%5 == 0) s+=i;
	}

	cout << s << endl;
	
	return 0;
}

