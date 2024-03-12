#include <bits/stdc++.h> 
vector<int> findFrequency(string S) {
	vector<int>hash(26,0);

	for(int i=0; i<S.size(); i++){
		hash[S[i]-'a']++;
	}

	vector<int>freq;

	for(int i=0; i<26; i++){
		freq.push_back(hash[i]);
	}

	return freq;
}
