#include <iostream>
#include <map>

using namespace std;

pair<string, string> separatePath(string path) {
	int pos = path.find('\\');

	if (pos == string::npos)
		return {path, ""};

	return {
		path.substr(0, pos),
		path.substr(pos + 1)
	};
}

class folder{
public:
	string m_name;
	map<string, folder> m_files;

	folder(string name) {
		m_name = name;
	}

	void setFolder(string path) {
		if (path == "") return;

		auto nowPath = separatePath(path);
		string child = nowPath.first;
		string rest = nowPath.second;

		if (m_files.find(child) == m_files.end()) 
			m_files.insert({child, folder(child)});

		m_files.at(child).setFolder(rest);
	}

	void output(int depth) {
		string indent = string(depth, ' ');
		for (auto now : m_files) {
			cout << indent << now.first << "\n";
			now.second.output(depth + 1);
		}
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int N;
	cin >> N;

	folder root("root");
	for (int i=0; i<N; i++) {
		string path;
		cin >> path;

		root.setFolder(path);
	}

	root.output(0);
}