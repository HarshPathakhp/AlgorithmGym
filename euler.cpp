/* Harsh Pathak - pogba */
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

ll gcd(ll a, ll b){
	if(a == 0){
		return b;
	}
	return gcd(b%a, a);
}

