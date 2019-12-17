/* Harsh Pathak - pogba */
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
int mod = 1e9 + 7;
// fast exponentiation and modular exponentiation api
ll fastexp(int x, int p){
	ll res = 1;
	while(p > 0){
		if(p & 1)res *= x;
		p >>= 1;
		x *= x;		
	}
	return res;
}
int fastmodexp(int x, int p){
	int res = 1;
	while(p > 0){
		if(p & 1) res = (int)(((ll)res * x) % mod);
		p >>= 1;
		x = (int)(((ll)x * x) % mod);
	}
	return res;
}
