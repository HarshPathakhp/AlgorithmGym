/* Harsh Pathak - pogba */
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

/* 
segment tree api inspired from https://codeforces.com/blog/entry/18051
*/
const int N = 1e5; //N is >= 2n-1
int t[N]; //tree
int n; //num elements
void take_input();
void build_tree();
void print_tree();
void modify_tree(int, int);
int query_tree(int, int);

void print_tree(){
	cout << "elements of tree\n";
	for (int i = 0; i < n; ++i)
	{
		cout << t[i + n] << " "; 
	}
	cout << endl;
}

void take_input(){
	for (int i = 0; i < n; ++i)
	{
		cin >> t[n + i];
	}
	build_tree();
}

void build_tree(){
	for(int i = n-1; i >= 1; i--){
		t[i] = t[i << 1] + t[i << 1 | 1];
	}
}

void modify_tree(int idx, int v){ //0 indexing
	t[idx += n] = v;
	int i = idx;
	while(i > 1){
		t[i >> 1] = t[i] + t[i ^ 1];
		i >>= 1;
	}
}

int query_tree(int l, int r){ //query on [l,r), 0 indexing
	l += n;
	r += n;
	int res = 0;
	while(l < r){
		if(l & 1) res += t[l++];
		if(r & 1) res += t[--r];
		l >>= 1;
		r >>= 1;
	}
	return res;
}

