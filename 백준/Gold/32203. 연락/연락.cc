#include <iostream>
#include <vector>

#define m first
#define w second
#define ll long long

using namespace std;

vector<bool> genderList;
ll couple = 0;

class UnionFind
{
private:
	vector<ll> parent, size;
	vector<pair<ll, ll>> gender;

public:
	UnionFind(ll n)
	{
		parent.resize(n + 1);
		gender.resize(n + 1);
		size.resize(n + 1, 1);

		for (ll i = 1; i <= n; i++)
		{
			parent[i] = i;
			
			if (genderList[i]) 
			    gender[i].m++;
			else
			    gender[i].w++;
		}
	}

	ll find(ll x)
	{
		if (parent[x] != x)
			parent[x] = find(parent[x]);
		
		return parent[x];
	}

	void unite(ll x, ll y)
	{
		ll rootX = find(x);
		ll rootY = find(y);

		if (rootX == rootY) return;

		if (size[rootX] < size[rootY])
			swap(rootX, rootY);

		parent[rootY] = rootX;
		size[rootX] += size[rootY];

		couple -= gender[rootX].m * gender[rootX].w +
			gender[rootY].m * gender[rootY].w;
		
		gender[rootX].m += gender[rootY].m;
		gender[rootX].w += gender[rootY].w;

		couple += gender[rootX].m * gender[rootX].w;
	}
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
	ll N, M;
	cin >> N >> M;

	genderList.resize(N + 1);
	for (ll i = 1, now; i <= N; i++)
	{
		cin >> now;
		genderList[i] = (now & 1);
	}

	UnionFind uf(N);

	for (ll i = 0, a, b; i < M; i++)
	{
		cin >> a >> b;

		if (uf.find(a) != uf.find(b))
			uf.unite(a, b);

		cout << couple << "\n";
	}
}