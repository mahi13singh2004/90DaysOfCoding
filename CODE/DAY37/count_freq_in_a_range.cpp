vector<int> countFrequency(int n, int x, vector<int> &array){
    vector<int>hash(1000000,0);

    for(int i=0; i<array.size(); i++){
        hash[array[i]]+=1;
    }

    vector<int>freq;

    for(int i=1; i<=n; i++){
        freq.push_back(hash[i]);
    }

    return freq;

}
