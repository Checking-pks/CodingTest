#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Road {
	int v, h1, h2;
};

class UnionFind {
private:
    std::vector<int> parent;
    std::vector<int> rank;

public:
    // UnionFind 생성자
    UnionFind(int size) {
        parent.resize(size);
        rank.resize(size, 0);

        // 초기화: 각 원소의 부모를 자기 자신으로 설정
        for (int i = 0; i < size; i++) {
            parent[i] = i;
        }
    }

    // 해당 원소가 속한 집합을 찾는 Find 연산
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]); // 경로 압축 (path compression)
        }
        return parent[x];
    }

    // 두 개의 집합을 합치는 Union 연산
    void unionSets(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            // rank를 사용한 합침 (union by rank)
            if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

bool cmp(Road a, Road b) {
	return a.v < b.v;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int sum=0, max=0, groupNum = 1;
	int homeNum, roadNum;
	cin >> homeNum >> roadNum;

	UnionFind uf(homeNum);
	vector<Road> roads;

	for (int i=0; i<roadNum; i++) {
		int a, b, c;
		cin >> a >> b >> c;

		roads.push_back({c, a, b});
	}

	sort(roads.begin(), roads.end(), cmp);

	for (int i=0; i<roadNum; i++) {
		Road nowRoad = roads[i];

		int g1 = uf.find(nowRoad.h1), g2 = uf.find(nowRoad.h2);

		if (g1 == g2) continue;

		uf.unionSets(g1, g2);
		
		sum += nowRoad.v;
		if (max < nowRoad.v) max = nowRoad.v;
	}

	cout << sum - max;
}